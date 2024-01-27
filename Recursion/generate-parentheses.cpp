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


/*
Approach:

We solve the problem recursively by maintaining a string of parentheses as ds and 
counter of open parentheses as open. n maintains the count of pairs remaining to be formed.
With each call to solve, if no new pair is left to be formed and no open parentheses are left,
we push the string to solution. 
Else if we have n>0 we open new parenthesis.
Simultaneously, we check if there are any open parenthesis left to be closed.
*/