/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Problem link - https://leetcode.com/problems/generate-parentheses/description/
*/


void solve(vector<string>&ans, string ds, int open, int n) {
    if(open==0 and n==0) {
        ans.push_back(ds);
        return;
    }
    if(n>0)
        solve(ans, ds+'(', open+1, n-1);
    if(open>0)
    solve(ans, ds+')', open-1, n);    
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    solve(ans, "", 0, n);

    return ans;
}
