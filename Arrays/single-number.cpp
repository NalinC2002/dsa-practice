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
Approach:

Basic intuition behind the problem is a^0=a and b^b=0
We XOR all elements together along with zero.
So all elements cancel out each other to give zero except the one with single occurrence
So the final value into x is the required element
*/