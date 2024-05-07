/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.

Problem link - https://leetcode.com/problems/set-matrix-zeroes/description/
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<bool> rows(m, false);
        vector<bool> cols(n, false);

        for(int i=0; i<m; i++) 
            for(int j=0; j<n; j++) 
                if(matrix[i][j]==0) {
                    rows[i] = true;
                    cols[j] = true;
                }

        for(int i=0; i<m; i++) {
            if(rows[i]) {
                for(int j=0; j<n; j++)
                    matrix[i][j] = 0;
            }
        }
        for(int j=0; j<n; j++) {
            if(cols[j]) {
                for(int i=0; i<m; i++)
                    matrix[i][j] = 0;
            }
        }
    }
};

/*
Approach - 
Make two bool vectors to note down which rows and cols are to be set to zeroes.
Then traverse each element to fill this array. Then traverse each row one by one 
to check if it is to be set to zero. If yes then traverse the corresponding col 
and set it to zero. Follow same for each col. 
*/