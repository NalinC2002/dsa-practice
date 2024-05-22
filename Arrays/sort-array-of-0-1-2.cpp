/*
Given an array nums with n objects colored red, white, or blue, sort them in-place 
so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Problem link - https://leetcode.com/problems/sort-colors/description/
*/


class Solution {
public:
    void sortColors(vector<int>& arr) {
        int lo, mid, hi;
        lo = 0; mid = 0; hi = arr.size()-1;

        while(mid<=hi) {
            switch(arr[mid]) {
                case 0: swap(arr[lo++], arr[mid++]);
                        break;

                case 1: mid++;
                        break;

                case 2: swap(arr[mid], arr[hi--]);

            }
        }
    }
};

/*
Approach - 
Dutch National Flag algorithm
Use 3 ptrs to point to the two ends and the other one to traverse.
When exchanging from hi do not move mid since we do not know if it is 0 or 1
*/