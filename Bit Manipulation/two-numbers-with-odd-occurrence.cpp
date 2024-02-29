/*
Given an array 'arr' of size 'n'. It contains an even number of occurrences for all numbers except two numbers.
Find those two numbers which have odd occurrences and return in decreasing order
*/

vector<int> twoOddNum(vector<int> arr){
    // Write your code here.
    vector<int> ans;

    int x = 0;
    for(auto i:arr) 
        x ^= i;
    //cout<<x<<endl;
    int check = 1;
    while((x&check)==0) {
        check <<= 1;
    }    
    //cout<<check<<endl;

    int set = 0, unset = 0;
    for(auto i:arr) {
        if((i&check)!=0)  set ^=i;
        else            unset^=i;
    }
    ans.push_back(set);
    ans.push_back(unset);
    if(set<unset) {
        reverse(ans.begin(), ans.end());
    }

    return ans;
}


/*
Approach:

When we XOR all elements of arr, we get the XOR of the two required numbers.
Then we find a bit in this result that is set. This bit signifies the position 
where the two numbers have different values. So we find the two sets - set and unset
that have the required bit set and unset respectively. XORing these sets will give the 
two numbers.
*/