/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, 
then rotated some number of positions (including zero). Otherwise, return false.
There may be duplicates in the original array.

Problem link - https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
*/

bool check(vector<int>& nums) {
    int breaks = 0;
    for(int i=0; i<nums.size()-1; i++){
        if(nums[i]>nums[i+1]) breaks++;
    }
    if(breaks>1)    return 0;
    else if(breaks==1 && nums[0]<nums[nums.size()-1])   return 0;
    return 1;    
}

/*
Approach:

We maintain a variable break that counts the number of times we see the (i+1)th element to be 
smaller than ith element. If the array is rotated then break is supposed to be 1 with first element being
greater than last element. If break is greater than 1 then it can not be even a rotated sorted array.
If break is 0 then array is sorted and unrotated.
*/