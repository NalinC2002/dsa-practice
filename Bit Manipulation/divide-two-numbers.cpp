/*
Given two integers dividend and divisor, divide two integers without using multiplication,
division, and mod operator. The integer division should truncate toward zero, 
which means losing its fractional part. 

For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

Return the quotient after dividing dividend by divisor.

Note: Assume we are dealing with an environment 
      that could only store integers within the 32-bit signed integer range: [−231, 231 − 1]. 
      For this problem, if the quotient is strictly greater than 231 - 1, then return 231 - 1, 
      and if the quotient is strictly less than -231, then return -231.


Problem link - https://leetcode.com/problems/divide-two-integers
*/

int divide(long int dvd,long int dvr) {
    if(dvd==INT_MIN and dvr==-1)   return INT_MAX;
    if(dvd==INT_MIN and dvr==1)     return INT_MIN;
    if(dvd==INT_MAX and dvr==-1)    return -INT_MAX;
    if(dvd==INT_MAX and dvr==1)     return INT_MAX;
    //if(dvd==INT_MAX and dvr==2)     return 2;
    int ans = 0;
    bool sign = (dvd>0)==(dvr<0)?1:0;
    dvd = abs(dvd);
    dvr = abs(dvr);

    while(dvd>=dvr) {
        long int temp = 0;
        while(dvd>=dvr<<1<<temp) {
            temp++;
        }
        dvd -= dvr<<(temp);
        ans += 1<<(temp);
    }
    return sign?-ans:ans;
}


/*
Approach:
We cannot divide nor multiply. So we check whether the dvd is greater than dvr.
If yes, then we do the same for dvr*2 by bit shifting. We keep the count of number of 
times we can do the same. Once our divisor exceeds dvd then we use this count to subtract the 
highest possible divisor value from dvd and add 1<<count to solution.
We do this until dvd>=dvr
*/