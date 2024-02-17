/*
Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.
Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; 
and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. 
Your goal is to maximize the number of your content children and output the maximum number.

Problem link - https://leetcode.com/problems/assign-cookies/description/
*/

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int count = 0;
    int i = g.size()-1;
    int j = s.size()-1;

    while(i>=0 and j>=0) {
        if(g[i]<=s[j]) {
            j--;
            count++;
        }
        i--;
    }

    return count;
}

/*
Approach:

A cookie can be used once. So we sort both the greed and size vector.
Then start checking in reverse fashion whether the current biggest cookie can satisfy current biggest greed.
If yes, then we increment the count and use that cookie. We keep decrementing the greed array at eaach step 
since it may be satisfied or unsatisfied by biggest cookie. 
*/