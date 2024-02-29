/*
Given two integers start and goal, return the minimum number of bit flips to convert start to goal.
A bit flip of a number x is choosing a bit in the binary representation of x and flipping it from either 0 to 1 or 1 to 0.

For example - 
For x = 7, the binary representation is 111 and we may choose any bit (including any leading zeros not shown) and flip it. 
We can flip the first bit from the right to get 110, flip the second bit from the right to get 101, 
flip the fifth bit from the right (a leading zero) to get 10111, etc.

Problem link - https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/
*/

int minBitFlips(int start, int goal) {
    int count = 0;
    for(int i=0; i<32; i++) {
        count += (start&1)^(goal&1);
        start = start>>1;
        goal = goal>>1;
    }
    return count;
}

/*
Approach:
Get every MSB and XOR them for goal and start 32 times (since integer). 
This gives the number of different bits. Add them to a counter.
Return this counter.
*/