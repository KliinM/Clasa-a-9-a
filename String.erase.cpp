#include <iostream>
#include <string>
using namespace std;
int main ()
{
 string str ("Imi plac strumfii.");
  cout << str << '\n';

  str.erase (16,8);
  cout << str << '\n';

  /*str.erase (str.begin()+9);
 cout << str << '\n';

  str.erase (str.begin()+5, str.end()-9);
 cout << str << '\n';*/
resturn 0;
}
