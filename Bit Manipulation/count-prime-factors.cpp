/*
Given an integer 'N',  return the unique prime factors of 'N' in increasing order.

Problem link - https://www.codingninjas.com/studio/problems/prime-factorisation_1760849
*/

vector<int> countPrimes(int n)
{
    vector<int> ans ;
    vector<bool> isPrime(n+1,true);
    isPrime[0] = isPrime[1] = false;
    for(int i=2; i<=n; i++) {
        if(isPrime[i]) {
            int j = 2;
            while(i*j<=n) {
                isPrime[i*j] = false;
                j++;
            }
            if (n % i == 0) {
                ans.push_back(i);
                while(n%i==0)
                    n /= i;
                i--;
            }
        }
    }
    return ans;
}

/*
Approach:

We make use of a boolean array isPrime of size n+1 (index 0 to n). We mark it to true initially.
isPrime[0] = isPrime[1] = false. Start analysing from 2. If a number is true in isPrime then 
mark all multiples of 2 as false in bool array and divide n by highest divisible power of that prime.
Push that prime into ans array.
Once n goes less than i we stop and return ans array.
*/