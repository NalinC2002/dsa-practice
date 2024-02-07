/*
You are given an integer array 'arr' of size 'N, sort this array using 'Bubble Sort'.
Change in the input array itself. You don't need to return or print the elements.

Problem link - https://www.codingninjas.com/studio/problems/bubble-sort_624380
*/

void bubbleSort(vector<int>& a, int n) 
{
    //write your code here
    int t;
    for(int i=n-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            if(a[j]>a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}


/*
Approach:

We sort array in ascending order so with each iteration the greatest element gets 
in its correct position from the remaining unsorted array.
In each iteration, we check whether the current element is greater than the next 
element, and if it is then we swap them both.
With each iteration the problem size reduces by 1. 
*/