/*
There is a frog on the '1st' step of an 'N' stairs long staircase. 
The frog wants to reach the 'Nth' stair. 'HEIGHT[i]' is the height of the '(i+1)th' stair.
If Frog jumps from 'ith' to 'jth' stair, the energy lost in the jump is given by absolute value of ( HEIGHT[i-1] - HEIGHT[j-1] ). 
If the Frog is on 'ith' staircase, he can jump either to '(i+1)th' stair or to '(i+2)th' stair. 
Your task is to find the minimum total energy used by the frog to reach from '1st' stair to 'Nth' stair.

For Example
If the given ‘HEIGHT’ array is [10,20,30,10], the answer 20 as the frog can jump from 1st stair to 2nd stair (|20-10| = 10 energy lost) 
and then a jump from 2nd stair to last stair (|10-20| = 10 energy lost). So, the total energy lost is 20.

Problem link - https://www.codingninjas.com/studio/problems/frog-jump_3621012
*/


//Recursion
int frogJump(int n, vector<int> &heights) {
    if(n==1)    return 0;
    if(n==2)    return abs(heights[1]-heights[0]); 

    int a = abs(heights[n-1]-heights[n-2]) + frogJump(n-1, heights);
    int b = abs(heights[n-1]-heights[n-3]) + frogJump(n-2, heights);

    return min(a,b);
}

//Memoization
int solve(int i, vector<int>&dp, vector<int>&hts) {
    
    if(dp[i]>0) return dp[i];
    if(i==0)    return 0;
    if(i==1)    return abs(hts[1]-hts[0]);
    
    int a = abs(hts[i]-hts[i-1]) + solve(i-1, dp, hts);
    int b = abs(hts[i]-hts[i-2]) + solve(i-2, dp, hts);
    dp[i] = min(a, b);

    return dp[i];
}

int frogJump(int n, vector<int> &heights) {
    vector<int> dp(n, -1);
    
    return solve(n-1, dp, heights);
}

//Tabulation
int frogJump(int n, vector<int> &hts) {
    vector<int> dp(n, -1);
    
    dp[0] = 0;
    dp[1] = abs(hts[1]-hts[0]);

    for(int i=2; i<n; i++) {
        int a = abs(hts[i]-hts[i-1]) + dp[i-1];
        int b = abs(hts[i]-hts[i-2]) + dp[i-2];
        dp[i] = min(a,b);
    }

    return dp[n-1];
}