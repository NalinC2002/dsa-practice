/*
For a given integer 'N', you have to return the number of set bits 
in the binary representation of the numbers from 1 to 'N'.
In a binary number '1' is considered as a set bit and '0' as not set.

Problem link - https://www.codingninjas.com/studio/problems/count-total-set-bits_784
*/

int leftSetBitPos(int n) {
    int x=-1;
    while(n>0) {
        x += 1;
        n = n>>1;
    }
    return x;
}

int countSetBits(int N)
{
    //Write your code here
    int count = 0;
    int x  = leftSetBitPos(N);
    while(N>0) {
        count += x*(1<<x)/2 + N - (1<<x) + 1;
        N = N&~(1<<x);

        while(N and x>0) {
            if(N & (1<<x))
                break;
            x--;    
        } 
    }
    return count;
}

/*
Approach:

Count total set bits till 2^x where x is the MSB set bit of N.
This is equal to x*(2^x)/2. Then add MSB of all remaining numbers.
That will be N-(2^x)+1. Now find set bits for those remaining numbers
by flipping the MSB.
*/