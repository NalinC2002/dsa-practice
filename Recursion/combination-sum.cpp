/*
Given an array of distinct integers candidates and a target integer target, return a list of 
all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency
of at least one of the chosen numbers is different.
2 <= candidates[i] <= 40

Problem link - https://leetcode.com/problems/combination-sum/description/
*/



void solve(int i, int n, int t, vector<int>&a, vector<int>&ds, vector<vector<int>>&ans) {
    if(t==0) {
        ans.push_back(ds);
        return;
    }
    if(i==n)
        return;

    if(t>=a[i]) {
        ds.push_back(a[i]);
        solve(i, n, t-a[i], a, ds, ans);
        ds.pop_back();
    } 
    solve(i+1, n, t, a, ds, ans);  
}

vector<vector<int>> combinationSum(vector<int>& candidates, int t) {
    vector<vector<int>> ans;
    vector<int> ds;

    solve(0, candidates.size(), t, candidates, ds, ans);
    return ans;
}

/*
Approach:

We solve the problem recursively using a vector of vectors ans and a vector ds.
t maintains the remaining sum to be found from the remaning array.

In the recursive function solve:
if remainig sum t is zero we push the selected elements to ans and return.
We also return if we have checked for all elements.
Else we check if current element is less than or equal to remaning sum, if yes we consider it 
a part of possible solution and add it to ds, and call solve for the same element again as it may be chosen again.
And we also check for solution without taking the particular element and calling solve for next element.
*/