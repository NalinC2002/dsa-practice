/*
Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it.
*/


class Solution {
public:
    void solve(int r, int rows, vector<vector<int>>&ans) {
        if(r>rows)  return;
        vector<int> ds;
        ds.push_back(1);
        int x = ans.size()-1;
        for(int i=1; i<r-1; i++) {
            ds.push_back(ans[x][i] + ans[x][i-1]);
        }
        ds.push_back(1);
        ans.push_back(ds);

        solve(r+1, rows, ans);
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back(vector<int>(1,1));

        solve(2, numRows, ans);
        return ans;
    }
};