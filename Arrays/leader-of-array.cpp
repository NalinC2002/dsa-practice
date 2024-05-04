/*
There is an integer array 'a' of size 'n'.
An element is called a Superior Element if it is greater than all the elements present to its right.
You must return an array all Superior Elements in the array 'a'.

Note:
The last element of the array is always a Superior Element. 

Problem link - https://www.naukri.com/code360/problems/superior-elements_6783446

*/

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    int max = INT_MIN;

    for(int i=a.size()-1; i>=0; i--) {
        if(a[i]>max) {
            max = a[i];
            ans.push_back(a[i]);
        }
    }
    return ans;
}


/*
Approach - 
Start traversing from right. Find the max encountered till yet and add it to ans vector.
*/