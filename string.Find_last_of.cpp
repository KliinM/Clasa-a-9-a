#include <iostream>       // std::cout
#include <string>         // std::string
#include <cstddef>         // std::size_t
using namespace std;
void SplitFilename (const std::string& str)
{
  cout << "Splitting: " << str << '\n';
  size_t found = str.find_last_of("/\\");
  cout << " path: " << str.substr(0,found) << '\n';
  cout << " file: " << str.substr(found+1) << '\n';
}

int main ()
{
  string str1 ("/usr/bin/man");
 string str2 ("c:\\windows\\winhelp.exe");

  SplitFilename (str1);
  SplitFilename (str2);

  return 0;
  //Asta nu prea inteleg
}
