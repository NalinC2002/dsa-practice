/*
Given an array 'A' of 'N' integers, return true if there exists a subset of elements of 'A' that sums up to 'K'. 
Otherwise, return false.
    1<=A[i]<=10^3

Problem link - https://www.codingninjas.com/studio/problems/subset-sum_630213
*/


void solve(int &n, int i, int k, bool &ans, vector<int> &a) {
    if(k==0)
        ans = true;

    if(ans==true or i==n)
        return;

    if(k>=a[i]) 
        solve(n, i+1, k-a[i], ans, a);

    solve(n, i+1, k, ans, a);    
}

bool isSubsetPresent(int n, int k, vector<int> &a)
{
    // Write your code here
    vector<int> ds;
    bool ans = false;
    solve(n, 0, k, ans, a);

    return ans;
}

/*
Approach:

Subset is any contiguous or non-contiguous collection of elements of an array.
We solve the problem recursively using take and not take method.
We maintain two variables with each call to function sole - k and ans.
k refers to the sum remaining to collect from array.
ans refers to whether or not we have found the solution even once in array.
The recursion stops only when ans is true or we cannot form the given sum.
*/