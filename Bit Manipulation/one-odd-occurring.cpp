/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Problem link - https://leetcode.com/problems/single-number/description/
*/

int singleNumber(vector<int>& nums) {
    int x = 0;
    for(auto i:nums) 
        x ^= i;

    return x;    
}

/*
Appraoch:

If two same numbers are XORed then result is 0. If a number is XORed with 0, result is 
the number itself. So XOR all elements to find the single occurring element.
*/