/*
Given an array 'arr' of 'n' non-negative integers, your task is to move all the zeros to the end of the array 
while keeping the non-zero elements at the start of the array in their original order. 
Return the modified array.

Problem link - https://www.codingninjas.com/studio/problems/ninja-and-the-zero-s_6581958
*/

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int j=0, i;
    while(a[j]!=0)  j++;
    i = j+1;

    while(i<n) {
        if(a[i]!=0) {
            a[j++] = a[i];
            a[i++] = 0; 
        }
        else i++;
    }
    return a;
}


/*
Approach:

We use 2 poihter approach to solve the problem.
Let our pointers be i and j. Place j at the first occurrence of 0.
Place i next to j. Now operate till i reaches out of bound.
Whenever i points to a non zero number swap a[i] and a[j], incrementing both i and j.
If a[i] is zero simply move forward by i++.

*/