/*
Given an integer 'N', generate and return all binary strings of length 'N' 
such that there are no consecutive 1's in the string.

Problem link - https://www.codingninjas.com/studio/problems/-binary-strings-with-no-consecutive-1s._893001
*/

void solve(int i, int n, string &bin, vector<string>&ans) {
    if(i==n) {
        ans.push_back(bin);
        return;
    }
    bin = bin + '0';
    solve(i+1, n, bin, ans);
    bin.pop_back();

    if(bin.length()==0 or bin.back()=='0') {
        bin = bin + '1';
        solve(i+1, n, bin, ans);
        bin.pop_back();
    }
}

vector<string> generateString(int N) {
    // Write your code here.
    vector<string> ans;
    string bin="";

    solve(0, N, bin, ans);

    return ans;
}

/*
Approach:

We manipulate a string bin recursively to obtain desired strings.
We keep track of current length i and desired length n.
With every call to solve, we check whether our string is of desired length.
If yes, push to vector.
if not, then we can do two things.
First we add 0 to string and call solve again with i+1 as new length.
And we go by adding 1 to string instead of 0 if last character is not 1.
*/