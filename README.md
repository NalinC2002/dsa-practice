# dsa-practice
A practice repo for DSA

Here I add all the solutions to the questions I practice at different coding platforms.

### Commands used on Git Bash

- git --version :- to know current version and to check whether git is functional or not
- pwd :- shows working directory
- cd :- change directory
- ls :- show all dir and files in current dir
- ls -a :- show all files including hidden
- git clone _link_ :- clones the repo into our system whose link has been provided(click on code button and go to HTTPS to find link)
- git status :- checks for the changes made in clone wrt original github repo
- git add _filename_ :- to stage the changes made in _filename_ 
- git commit -m " " :- to commit the changes made with a message
- git push _origin main_ :- to push the committed changes to original github repo in branch _origin main_

If changes made in clone file need to pushed into original repo, we need to first add those files to stage the changes and then commit them with a message that will refer to the change made in repo and increase readability of changes made.
Then our clone repo is 1 commit ahead of original repo, so push changes into it.

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

### Methods on Strings
- s.begin() - returns ptr to first char of string
- s.end() - returns ptr to memory location just after last char of string
- s.length() - returns length of string
...to be updated