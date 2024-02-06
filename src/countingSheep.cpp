/*
Consider an array/list of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in the array (true means present).

For example,

[true,  true,  true,  false,
true,  true,  true,  true , 
true,  false, true,  false,
true,  false, false, true ,
true,  true,  true,  true ,
false, false, true,  true]
The correct answer would be 17.

Hint: Don't forget to check for bad values like null/undefined
*/

#include <vector>

//1st
int count_sheep(std::vector<bool> arr) 
{
  int counter = 0;
  for (auto &&i : arr)
  {
    if(i == true) counter++;
  }

  return counter;
  
}

//2nd
#include<algorithm>
int count_sheep2(std::vector<bool> arr) 
{
  return std::count(arr.begin(),arr.end(),true);
}

