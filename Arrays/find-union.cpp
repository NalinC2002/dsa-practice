/*
Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.
The union of two sorted arrays can be defined as an array consisting of the common and 
the distinct elements of the two arrays. The final array should be sorted in ascending order.

Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.

Problem link - https://www.codingninjas.com/studio/problems/sorted-array_6613259
*/

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> ans;
    auto i = a.begin();
    auto j = b.begin();

    while(i!=a.end() and j!=b.end()){
        if(*i<*j) {
            ans.push_back(*i);
            while(*i==*(i+1))   i++;    i++;
        }
        else if(*i==*j) {
            ans.push_back(*i);
            while(*i==*(i+1))   i++;    i++;
            while(*j==*(j+1))   j++;    j++;
        }
        else {
            ans.push_back(*j);
            while(*j==*(j+1))   j++;    j++;
        }
    }
    while(i!=a.end()) {
        ans.push_back(*i);
        while(*i==*(i+1))   i++;    i++;
    }
    while(j!=b.end()) {
        ans.push_back(*j);
        while(*j==*(j+1))   j++;    j++;
    }
    return ans;
}