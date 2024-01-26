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