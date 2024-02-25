/*
You are given two numbers 'a' and 'b' as input.
You must swap the values of 'a' and 'b'.

Problem link - https://www.codingninjas.com/studio/problems/swap-two-numbers_1380853
*/

void swapNumber(int &a, int &b) {
	// Write your code here.
	a = a^b;
	b = a^b;
	a = a^b;
}

/*
Approach:

Just need XOR operation. 
a = a^b
b = (a^b)^b = a
a = (a^b)^a = b
*/