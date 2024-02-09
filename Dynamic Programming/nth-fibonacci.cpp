/*
The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
F(n) = F(n - 1) + F(n - 2), 
Where, F(1) = 1, F(2) = 1

Provided 'n' you have to find out the n-th Fibonacci Number. 
Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.
"Indexing is start from 1"
1 <= 'n' <= 10000 

Problem link - https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156
*/

//Using Recursion

int fibo(int n) {
    if(n==1 or n==2)
        return 1;
    return fibo(n-1)+fibo(n-2);    
}

//Using Memoization
int solve(int n, vector<int>&dp) {
    if(dp[n]>0)
        return dp[n];
    if(n==1 or n==2)
        return 1;

    dp[n] = solve(n-1, dp) + solve(n-2, dp);
    return dp[n];
}


int fibo(int n) {
    vector<int> dp(n+1,-1);

    return solve(n, dp);
}

//Using Tabulation

int fibo(int n) {
    int a=1, b=1, c;
    for(int i=1; i<n; i++)  {
        c = a+b;
        a = b; 
        b = c;
    }  
    return a;
}