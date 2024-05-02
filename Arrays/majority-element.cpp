/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.

Problem link - https://leetcode.com/problems/majority-element/description/
*/

class Solution {
public:
    int majorityElement(vector<int>& v) {
        int count = 0, candidate = v[0];
        for(auto i:v) {
            if(count==0)
                candidate = i;
            if(candidate==i)
                count++;
            else
                count--;        
        }
        return candidate;
    }
};

/*
Approach - 
Maintain a count of the current element and decrease it when you encounter a 
different value. When value is zero we switch the element of focus.
The last element of focus will be answer.
*/