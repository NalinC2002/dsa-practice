/*
Given an integer 'N', return 'odd' if the given number 'N' is odd, else return 'even'.
1 <= N <= 10^4

Problem link - https://www.codingninjas.com/studio/problems/odd-even_7993579
*/

string oddEven(int N){
    // Write your code here.
    if(N&1) return "odd";
    return "even";
}

/*
Approach:

N&1 will give us the LSB.
If LSB is 1 then odd, otherwise even.
*/