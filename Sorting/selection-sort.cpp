/*
Sort the given unsorted array 'arr' of size 'N' in non-decreasing order using the selection sort algorithm.
Change in the input array/list itself.

Problem link - https://www.codingninjas.com/studio/problems/selection-sort_624469
*/

void selectionSort(vector<int>&a) {
    int n = arr.size();

    for(int i=0; i<n-1; i++) {
        int k = i;
        for(int j=i+1; j<n; j++) {
            if(a[j]<a[k]) 
                k = j;
        }
        if(k!=i) {
            int t = a[i];
            a[i] = a[k];
            a[k] = t;
        }
    }
}

/*
Approach:

Selection sort selects the smallest element from unsorted array in each iteration and
swaps it with the current position. With each iteration problem size reduces by one.
*/