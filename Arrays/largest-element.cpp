/*
Given an array ‘arr’ of size ‘n’ find the largest element in the array.

Problem link - https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279
*/

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int max = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}

/*
Approach:

Traverse the array and maintain a max variable to track the largest 
number encountered.
Return value of max after traversing.
*/