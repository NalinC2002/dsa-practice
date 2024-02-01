/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place 
such that each unique element appears only once. The relative order of the elements should be kept the same. 
Then return the number of unique elements in nums.


*/


int removeDuplicates(vector<int>& nums) {
    int count = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1])
                count++;
        }
        return count;
}

/*
Approach:

We just need to return the length of array with unique elements so 
we will just count the number of unique elements iteratively.

*/