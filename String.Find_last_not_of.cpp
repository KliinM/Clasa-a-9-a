#include <iostream>
#include <string>
#include <cstddef>
using namespace std;
int main ()
{
 string str ("Calin trecer strada \n");
  string whitespaces (" \t\f\v\n\r");

  size_t found = str.find_last_not_of(whitespaces);
  if (found!=string::npos)//Pozitia la string??
    str.erase(found+1);//muta paranteza patrata cu un spatiu
  else
    str.clear();
  std::cout << "[" << str << "]\n";

  return 0;
}
