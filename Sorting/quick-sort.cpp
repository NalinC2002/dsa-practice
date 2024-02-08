/*
Given the 'start' and the 'end'' positions of the array 'input'. 
Your task is to sort the elements between 'start' and 'end' using quick sort.
Make changes in the input array itself.

Problem link - https://www.codingninjas.com/studio/problems/quick-sort_5844
*/

int partitionArray(int input[], int start, int end) {
	int i = start - 1;
    int j = start;
    int x = input[end];
    int t;
    while(j<end) {
        if(input[j]<x) {
            t =  input[++i];
            input[i] = input[j];
            input[j] = t;
        }
        j++;
    }
    if(i+1!=end) {
        t = input[i+1];
        input[i+1] = x;
        input[end] = t;
    }
    return i+1;
}

void quickSort(int input[], int start, int end) {
	int q = partitionArray(input, start, end);

    if(q>start)     quickSort(input, start, q-1);
    if(q<end)       quickSort(input, q+1, end);
}

/*
Approach:

Quick sort uses divide and conquer approach to solve the problem.
We select a pivot element first and try to divide the remaining array into 
two parts - one with all elements lesser than pivot val and other with all 
elements greater than the pivot val. Then we place the pivot in the correct location 
into the array and perform quicksort recursively over the two parts aroung pivot.
*/