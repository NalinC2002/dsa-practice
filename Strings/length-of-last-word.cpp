/*
Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.

Problem link - https://leetcode.com/problems/length-of-last-word/
*/

int lengthOfLastWord(string s) {
    int l = 0;
    auto it = s.rbegin();
    while(*it==' ') it++;
    while(*it!=' ' and it!=s.rend()) {
        l++;
        it++;
    }

    return l;
}

/*
Approach:

We use a reverse ptr over given string using rbegin() and then take the ptr
to point towards the last non-space character. Then we start counting characters until 
we encounter first space. Return the count.
*/