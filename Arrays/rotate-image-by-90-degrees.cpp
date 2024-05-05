/*
Given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place. DO NOT allocate another 2D matrix and do the rotation.

Problem link - https://leetcode.com/problems/rotate-image/description/
*/

class Solution {
public:
    void revRow(vector<int> &v, int n) {
        int i=0;
        n--;
        while(i<n) {
            int temp = v[i];
            v[i++] = v[n];
            v[n--] = temp;
        }
    }

    void rotate(vector<vector<int>> &mat){
        // Write your code here.
        int n = mat.size();
        int t;
        for(int i=0; i<n; i++) {
            for(int j=0; j<i; j++) {
                t = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = t;
            }
        }

        for(int i=0; i<n; i++) {
            revRow(mat[i], n);
        }
    }
};

/*
Approach - 
Transpose the matrix and then reverse each row to get the solution.
*/