/*
Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2^x.

Problem link - https://leetcode.com/problems/power-of-two/description/
*/

bool isPowerOfTwo(int n) {
    if(n<=0)    return false;
    int count = 0;

    while(n) {
        count += n&1;
        n = n>>1;
        if(count>1) return false;
    }
    if(count==1)    return true;
    return false;
}

/*
Approach:

Count the number of set bits by using bitwise and and right shifting n iteratively.
set bits is supposed to be exactly 1.
*/