/*
Given a number n, return the prime factorization of n in ascending order.
*/

vector<int> countPrimes(int n)
{
    vector<int> ans ;
    vector<int> spf(n+1,true);
    //isPrime[0] = isPrime[1] = false;

    for(int i=2; i<=n; i++) {
        spf[i] = i;
    }

    for(int i=2; i<=n; i++) {
        if(spf[i]==i) {
            for(int j=i*i; j<=n; j+=i) {
                if(spf[j]==j) 
                    spf[j] = i;
            }
        }
    }
    while(n!=1) {
        ans.push_back(spf[n]);
        n /= spf[n];
    }
    return ans;
}

/*
Approach:

Sieve of Eratosthenes

Mark all numbers of their shortest prime factor in an array. Initialise the array with its own indices.
Then check if number is prime (i.e., spf[i]==i) then mark its multiples starting from i*i to n that have not 
been marked yet to i (these numbers have spf as i). Now use this array to find spf of n and keep dividing n by is spf 
until n>1
*/