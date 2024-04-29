/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Problem link - https://leetcode.com/problems/max-consecutive-ones/description/
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max = 0;
        for(auto i:nums) {
            if(i==0) {
                count = 0;        
            }
            else{
                count++;
                if(max<count)
                    max = count;  
            }
        }
        return max;
    }
};

/*
Approach - 
Traverse array to maintain a count of consecutive ones and update when greater than max.
*/