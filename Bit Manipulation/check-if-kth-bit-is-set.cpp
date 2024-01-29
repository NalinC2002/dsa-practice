/*
Given a number ‘N’ and a number ‘K’. Return true if ‘K’th bit of number is set, else return false.

Problem link - https://www.codingninjas.com/studio/problems/check-whether-k-th-bit-is-set-or-not_5026446
*/

bool isKthBitSet(int n, int k)
{
    // Write your code here.
    return n&int(pow(2, k-1));
}

/*
Approach:

We use bitwise AND between the number and 2^(k-1). 
This gives an integer that is greater than 0 if the required bit is set.
*/