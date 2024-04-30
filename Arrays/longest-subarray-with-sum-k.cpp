/*
Given an array 'a' of size 'n' and an integer 'k'.
Find the length of the longest subarray of 'a' whose sum is equal to 'k'.

Problem link - https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399
*/

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    long long sum = a[0];
    int i=0; int j=0;
    int ans=0;

    while(j<n and i<=j) {
        if(sum==k) {
            if(j-i+1>ans)     ans = j-i+1;
            if(j<n-1)
            sum += a[++j];
            else break;
        }

        if (sum > k) 
            sum -= a[i++];
        else if (sum < k and j < n)
            sum+=a[++j];
    }

    return ans;
}

/*
Approach - 
Sliding window algo.
*/