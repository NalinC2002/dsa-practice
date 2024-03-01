/*
Given an integer array nums of unique elements, return all possible subsets(the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.

Problem link - https://leetcode.com/problems/subsets/description/
*/

vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;

    for(int num=0; num<(1<<n); num++) {
        vector<int> ds;
        for(int i=0; i<n; i++) {
            if(num&(1<<i)) {
                ds.push_back(nums[i]);
            }
        }
        ans.push_back(ds);
    }
    return ans;
}


/*
Approach:

Subsets problem can be solved by recursion. Here we solve this using bit manipulation.
For the length of vector n, we find first 2^n numbers that are actually formed using n bits.
Then we find all set bits of each number and push the number in nums at that positon 
to local vector ds. Push each possible ds to ans. 

*/