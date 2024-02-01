/*
Given an array 'A'and an integer 'K', generate and return all subarrays of array ‘A’ whose sum = ‘K’.

Problem link - https://www.codingninjas.com/studio/problems/subarrays-with-sum-%E2%80%98k'_6922076
*/


vector<vector<int>> subarraysWithSumK(vector<int> a, long long k) {
    // Write your code here
    vector<vector<int>> ans;
    int i=0, j=0;
    long long sum = a[i];
    int n = a.size();

    while(i<=j and j<n) {
        if(sum==k) {
            ans.push_back(vector<int>(a.begin()+i, a.begin()+j+1));
            sum += a[++j];
        }

        else if(sum>k and i<j) {
            sum -= a[i++];
        }
        else {
            if(j==n-1)     break;
            sum += a[++j];
        }
    }

    return ans;
}

/*
Approach:

Subarrays refer to contiguous subset of an array. So we can use sliding window method.
We let i be the start pointer and j be the end pointer of the subarray.
Whenever our subarray sum equals k, we push it to solution and increase window from tail.
If our subarray sum is greater than k, we decrease window from head.
And if subarray sum is less than k, we increase window size from tail, except when j is pointing to last element.
*/