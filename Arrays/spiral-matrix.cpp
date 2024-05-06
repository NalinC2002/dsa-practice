/*
Given an m x n matrix, return all elements of the matrix in spiral order.

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10

Problem link - https://leetcode.com/problems/spiral-matrix/description/
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;

        int top = 0, bottom = m-1;
        int left = 0, right = n-1;

        while(top<=bottom and left<=right) {
            for(int i=left; i<=right; i++) 
                ans.push_back(matrix[top][i]);
            top++;    

            for(int j=top; j<=bottom; j++)
                ans.push_back(matrix[j][right]);
            right--;

            if(top<=bottom) {
                for(int i=right; i>=left; i--) 
                    ans.push_back(matrix[bottom][i]);
                bottom--;    
            }        

            if(left<=right) {
                for(int j=bottom; j>=top; j--)
                    ans.push_back(matrix[j][left]);
                left++;    
            }
        }
        return ans;
    }
};

/*
Appraoch - 
Maintain 4 var. Traverse the matrix line by line according to them and keep updating them.
*/