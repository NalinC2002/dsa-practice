/*
The problem is to find the rightmost bit of a non-negative number 'N' 
that is currently unset (i.e., has a value of 0) in its binary 
representation and set it to 1.

Return the number after setting the rightmost unset bit of 'N'. 
If there are no unset bits in N's binary representation, 
then the number should remain unchanged.
1 <= N <= 10^9

Problem link - https://www.codingninjas.com/studio/problems/set-the-rightmost-unset-bit_8160456
*/

int setBits(int n){
    // Write your code here.
    int i=0;
    int x = n;
    while(x&1) {
        i++;
        x = x>>1;
    }
    if(n > (1<<i))
        return n + (1<<i);
    return n;    
}

/*
Approach:

Find the unset bit position, say i, first by right shifting.
Then add the value of 2^i to number.
*/