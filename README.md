# dsa-practice
A practice repo for DSA

Here I add all the solutions to the questions I practice at different coding platforms.

### Commands used on Git Bash

- git status :- checks for the changes made in clone wrt original github repo
- git add <filename> :- to stage the changes made in <filename>   
- git commit -m " " :- to commit the changes made with a message
- git push origin main :- to push the committed changes to original github repo

### Methods on Vectors

- v.push_back() - push element to right
- v.pop_back() - pop the last element
- v.size() - returns size of vector 
- v.clear() - delete all elements
- v.erase(ptr1) - deletes element pointed by the pointer
  v.erase(ptr1, ptr2) - deletes elements in the range between ptr1 and ptr2
- v.insert(ptr1, val) - inserts val at ptr1 location
  v.insert(ptr1, ptr2, ptr3) - inserts a range of elements from ptr2 to ptr3 at location of ptr1
- v.begin() - returns ptr to first element of vector
  v.end() - returns ptr to memory location just after last element
- v.rbegin() - returns ptr to last element of vector
  v.rend() - reuturns ptr to memory location just before first element  
  #### Incrementing begin will move the ptr to next element of vector, whereas incrementing rbegin will move the ptr to prev element of vector. 
  #### None of them can be decremented while using to traverse vector.