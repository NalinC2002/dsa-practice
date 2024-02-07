/*
Given the starting 'l' and the ending 'r' positions of the array 'ARR', sort the elements between 'l' and 'r'.
Change in the input array itself. So no need to return or print anything.

Problem link - https://www.codingninjas.com/studio/problems/merge-sort_5846
*/


void merge(int a[], int l, int m, int r) {
    int b[r-l+1];
    int k = 0, i = l, j = m+1;

    while(i<=m and j<=r) {
        if(a[i]<=a[j]) 
            b[k++] = a[i++];
        else 
            b[k++] = a[j++];
    }
    while(i<=m) {
        b[k++] = a[i++];
    }
    while(j<=r) {
        b[k++] = a[j++];
    }

    k=0;
    for(i=l; i<=r; i++) {
        a[i] = b[k++];
    }
}


void mergeSort(int arr[], int l, int r) {
    if(l<r) {
        int m = l + (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

/*
Approach:

We are using merge sort. Divide the array into two parts until we are left with one element each.
Then we merge elements in sorted order. We keep doing so assuming that the input subarrays are 
already sorted.
*/