/*
Given two numbers 'L' and 'R', find the XOR of the elements 
in the range [L, R].

For Example:
For 'L' = 1 and ‘R’ = 5. The answer is 1.

Problem link - https://www.codingninjas.com/studio/problems/l-to-r-xor_8160412
*/

int XOR(int n) {
    int r = n%4;
    switch(r) {
        case 0: return n;
        case 1: return 1;
        case 2: return n+1;
        case 3: return 0;
    }
}

int findXOR(int L, int R){
    // Write your code here.
    
    return XOR(R)^XOR(L-1);
}

/*
Approach:

XOR from L to R is same as XOR form 0 to R then XORed to 
XOR of 0 to L-1. And XOR from 0 to N follows a pattern.
*/