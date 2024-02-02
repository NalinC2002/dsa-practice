/*
Given an array ‘arr’ containing ‘n’ integersand an integer ‘num’, your task is 
to find whether ‘num’ is present in the array or not.
If ‘num’ is present in the array, return the 0-based index of the first occurrence of ‘num’. 
Else, return -1.

Problem link - https://www.codingninjas.com/studio/problems/linear-search_6922070
*/

int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    for(int i=0; i<n; i++){
        if(arr[i]==num)     return i;
    }
    return -1;
}


/*
Approach:

Search for num iteratively and return its index if found.
Return -1 otherwise
*/