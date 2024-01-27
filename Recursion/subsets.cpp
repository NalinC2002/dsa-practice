/*
Given an integer array nums of unique elements, return all possible subsets(the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.

Problem link - https://leetcode.com/problems/subsets/description/
*/


void solve(vector<int> &nums, int i, int n, vector<int> &ds, vector<vector<int>> &ans) {
    if(i==n) {
        ans.push_back(ds);
        return;
    }

    ds.push_back(nums[i]);
    solve(nums, i+1, n, ds, ans);
    ds.pop_back();
    solve(nums, i+1, n, ds, ans);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> ds;

    solve(nums, 0, nums.size(), ds, ans);
    return ans;
}

/*
Approach:

We maintain a vector ds that has selected integers from nums.
We iterate over nums using i and do two things recursively.
We either take the current integer and add it to ds, 
or we do not take it and move on with next index.
When i equals length of nums we push the particular vector made by the
combination of take and not take.
*/
