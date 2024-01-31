/*
Given an array ‘a’ of ‘n’ non-negative integers, check whether 
the given array is sorted in the non-decreasing order or not.
Return 1 if the given array is sorted. Else, return 0.

Problem link - https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957
*/

int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]) return 0;    
    }
    return 1;
}

/*
Approach:

We traverse the array and check if current element is lesser
than the next element. If not return 0.
If we reach the end of loop, return true.
*/
