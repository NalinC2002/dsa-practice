/*
You are a professional robber planning to rob houses along a street. 
Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. 
That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, 
and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money 
you can rob tonight without alerting the police.

Problem link - https://leetcode.com/problems/house-robber-ii/description/
*/

int solve(int i, int j, vector<int>&dp, vector<int>&nums) {
    for(int x=i; x<=j; x++) {
        dp[x] = max(dp[x-1], nums[x]+dp[x-2]);
    }
    return dp[j];
}

int rob(vector<int>& nums) {
    int n = nums.size();
    if(n==1)    return nums[0];
    if(n==2)    return max(nums[0], nums[1]);

    vector<int> dp(n,-1);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    int a = solve(2, n-2, dp, nums);

    for(int i=0; i<n; i++)  dp[i] = -1;
    dp[1] = nums[1];
    dp[2] = max(nums[1], nums[2]);

    int b = solve(3, n-1, dp, nums);

    return max(a,b);
}

/*
Approach:

We cannot select the first and last house together. So we calculate max loot for houses [0...n-2] and [1...n-1].
Then return the max of both.
To find the best solution within a range we use a function solve that would follow the take and not take rule.
*/