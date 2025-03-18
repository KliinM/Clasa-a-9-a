#include <iostream>
#include <string>
using namespace std;
int main()
{
 string str ("Rares se joaca jocuri");
 cout << str << "\n";

  unsigned sz = str.size();

  str.resize (sz+1,'i');
   cout << str << "\n";

  str.resize (8);//Afiseaza pana la pozitia 8
  cout << str << "\n";
  return 0;
}
