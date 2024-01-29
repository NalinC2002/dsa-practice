/*
Given a 32-bit unsigned integer called 'num' and another integer called 'i', you need to perform the following operations:

1. Get the bit value at the "i"th position of "num".
2. Set the bit at the "i"th position of "num".
3. Clear the bit at the "i"th position of "num".

We are starting bits from 1 instead of 0. (1-based)
Result of each operation is to be stored inside a vector that is returned as solution. 

Problem link - https://www.codingninjas.com/studio/problems/bit-manipulation_8142533
*/


vector<int> bitManipulation(int num, int i){
    // Write your code here.
    vector<int> ans;
    int bit = num & int(pow(2,i-1));
    if(bit>0)
    ans.push_back(1);
    else    ans.push_back(0);
    
    int set, clear;
    if(bit) {
        set = num;
        clear = num - int(pow(2,i-1));
    }
    else {
        set = num + int(pow(2, i-1));
        clear = num;
    }
    ans.push_back(set);
    ans.push_back(clear);

    return ans;
}

/*
Approach:

First we find the required bit value using bitwise and.
Then for the next two parts, the execution depends over value of the bit we found.
If it is 1, num is solution to 2nd question and we subtract 2^(i-1) to find 3rd answer.
Else num is solution to 3rd question and we add 2^(i-1) to find 2nd answer.
*/