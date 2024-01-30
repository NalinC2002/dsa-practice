/*
You have been given an array ‘a’ of ‘n’ unique non-negative integers.
Find the second largest and second smallest element from the array.
Return the two elements (second largest and second smallest) 
as another array of size 2.

2 ≤ 'n' ≤ 10^5
0 ≤ 'a'[i] ≤ 10^9

Problem link - https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960
*/

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int max =  a[0]>a[1]?a[0]:a[1];
    int max2 = a[0]>a[1]?a[1]:a[0];
    int min = max2;
    int min2 = max;

    for(int i=2; i<n; i++){
        if(a[i] > max2){
            max2 = a[i];
            if(max2 > max){
                max = max + max2;
                max2 = max - max2;
                max = max - max2;
            }
        }
        if(a[i] < min2){
            min2 = a[i];
            if(min2 < min){
                min = min + min2;
                min2 = min - min2;
                min = min - min2;
            }
        }
    }
    return {max2, min2};
}


/*
Approach:

We maintain max and max2 to store largest and second largest element.
Same goes for min and min2.
Set these variables based on first two elements of array.
Iterate over remaining array and check each element.
If an element is greater than max2 then do max2 = a[i] and if max2 is greater 
than max then swap the values of max and max2.
Do the same for min and min2 in the same loop
*/