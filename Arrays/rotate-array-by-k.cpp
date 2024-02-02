/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Problem link - https://leetcode.com/problems/rotate-array/description/
*/

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k%n;
    vector<int> temp(nums.begin()+(n-k), nums.end());
    
    nums.erase(nums.begin()+(n-k), nums.end());
    nums.insert(nums.begin(), temp.begin(), temp.end());
}

/*
Appraoch:

k can be greater than n so we opotimize it first.
Then copy the last k elements of nums into temp and erase those elements from nums.
Then copy all elements of temp in front of nums.
*/