/*
You are given an integer array 'arr' of size 'N', sort this array using 'Insertion Sort' recursively.
Change in the input array itself. You don't need to return or print the elements.

Problem link - https://www.codingninjas.com/studio/problems/insertion-sort_624381
*/

void insertionSort(int a[], int n)
{
    for(int i=1; i<n; i++) {
        int k = a[i];
        int j = i-1;
        while(j>=0 and a[j]>k) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = k; 
    }
}

/*
Approach:

We insert an unsorted element into sorted part of array one by one.
We shift greater element to right until we find the correct position for current element.
*/