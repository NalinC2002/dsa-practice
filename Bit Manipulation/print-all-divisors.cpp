/*
Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’ in ascending order.

Problem link - https://www.codingninjas.com/studio/problems/print-all-divisors-of-a-number_1164188
*/
int* printDivisors(int n, int &size){
// Write your code here
    vector<int> ans;
    for(int i=1; i*i<=n; i++){
        if(n%i==0) {
            ans.push_back(i);
            if(i!=n/i)
            ans.push_back(n/i);
        }
    }
    
    sort(ans.begin(), ans.end());
    /*
    for(auto i:ans) {
        cout<<i<<" ";
    }
    */
    int *a;
    size = ans.size();
    a = (int *)malloc(n*sizeof(int));
    for(int i=0; i<size; i++) {
        a[i] = ans[i];
    }

    return a;
}

/*
Approach:

Save answer into a vector and then push them to a dynamically allocated array.
We know that divisors repeat themselves after sqrt(N) so iterate till there and push i and N/i 
into vector.
*/
