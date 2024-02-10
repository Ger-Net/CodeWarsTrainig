/*Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:

Sam Harris => S.H

patrick feeney => P.F
*/

#include <string>

//1st
std::string abbrevName(std::string name)
{
    std::string newstr = "";
    newstr.push_back(toupper(name[0]));
    newstr.push_back('.');
    newstr.push_back(toupper(name[name.find(' ') + 1]));
    return newstr;
}