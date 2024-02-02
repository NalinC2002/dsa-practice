/*
Given an array 'arr' containing 'n' elements, rotate this array left once and return it.
Rotating the array left by one means shifting all elements by one place to the left and 
moving the first element to the last position in the array.

Problem link - https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278
*/


vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    arr.push_back(arr[0]);
    arr.erase(arr.begin());

    return arr;
}


/*
Approach:

Push first element at last of vector arr and then remove the first element of arr.
*/