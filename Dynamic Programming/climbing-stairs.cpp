/*
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Problem link - https://leetcode.com/problems/climbing-stairs/description/
*/


//Recursion
int climbStairs(int n) {
    if(n==1 || n==0)
        return 1;
    return climbStairs(n-1) + climbStairs(n-2);
}

//Memoization
int solve(int n, vector<int> &dp) {
    if(dp[n]>0)     return dp[n];
    if(n==1 or n==0)    
        return 1;
    dp[n] = solve(n-1, dp) + solve(n-2, dp);

    return dp[n];    
}

int climbStairs(int n) {
    vector<int>dp(n+1, -1);
    return solve(n, dp);
}


//Tabulation
int climbStairs(int n) {
    int a = 1;
    int b = 1;
    int c;
    for(int i=0; i<n; i++) {
        c = a+b;
        a = b;
        b = c;
    }
    return a;
}