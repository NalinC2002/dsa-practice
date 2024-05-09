/*
Given an array having both positive and negative integers. C
Compute the length of the largest subarray with sum 0.

Problem link - https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        map<int, int>m;
        int sum = 0;
        int max = 0;
        
        int i=-1; 
        while(++i<n) {
            sum += A[i];
            if(sum==0) {
                max = (i+1 > max)? i+1 : max;
            }
            else if(m.find(sum)!=m.end()) {
                max = (i-m[sum] > max)? i-m[sum]:max;
            }
            else {
                m[sum] = i;
            }
        }
        return max;
    }
};

/*
Approach - 
We will traverse the array and keep track of total sum obtained yet. If this sum==0,
then compare max to current length of array. Else if this sum!=0 and not in map then 
add it to map with sum as the key and index as its value. If sum found in map, then
we know that elements b/w current and previous endex with given sum form sum 0. Compare
this subarray length to max. Return max at last.
*/