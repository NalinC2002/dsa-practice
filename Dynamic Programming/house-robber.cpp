/*
You are a professional robber planning to rob houses along a street. 
Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them 
is that adjacent houses have security systems connected and it will automatically contact the police 
if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, 
return the maximum amount of money you can rob tonight without alerting the police.

Problem link - https://leetcode.com/problems/house-robber/description/
*/


//Memoization
int solve(int i, vector<int>&dp, vector<int>&nums) {
    if(dp[i]>=0)     return dp[i];
    if(i==0)    return dp[i] = nums[i];
    if(i==1)    return dp[i] = max(nums[0], nums[1]);
    if(i==2)    return dp[i] = max(nums[1], nums[0]+nums[2]);

    int a = solve(i-2, dp, nums);
    int b = solve(i-3, dp, nums);
    dp[i] = max(solve(i-1, dp, nums), max(a, b)+nums[i]);

    return dp[i];
}

int rob(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n,-1);

    return solve(n-1, dp, nums);
}


//Tabulation
int rob(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, -1);

    dp[0] = nums[0];
    if(n>1)     dp[1] = max(nums[0], nums[1]);
    if(n>2)     dp[2] = max(nums[1], nums[0]+nums[2]);

    for(int i=3; i<n; i++) {
        dp[i] = max(dp[i-1], max(dp[i-2], dp[i-3])+nums[i]);
    }

    return dp[n-1];
}
