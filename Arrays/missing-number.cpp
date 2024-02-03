/*
Given an array nums containing n distinct numbers in the range [0, n], 
return the only number in the range that is missing from the array.

Problem link - https://leetcode.com/problems/missing-number/description/
*/

int missingNumber(vector<int>& nums) {
    int n = nums.size();

    long int sum = 0;
    for(int i=0; i<n; i++) {
        sum += nums[i];
    }
    return int(n*(n+1)/2 - sum);        
}


/*
Approach:

Find the sum of all numbers in array. Sum of first n numbers is n(n+1)/2.
Difference in both gives answer.
*/