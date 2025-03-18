#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string str1 ("yellow banana");
 string str2 ("yellow banana");

  if (str1.compare(str2) != 0)
    cout << str1 << " is not " << str2 << '\n';

  if (str1.compare(6,5,"banana") == 0)
   cout << "still, " << str1 << " is an banana\n";

  if (str2.compare(str2.size()-5,5,"banana") == 0)
   cout << "and " << str2 << " is also an banana\n";

  if (str1.compare(6,5,str2,4,5) == 0)
   cout << "therefore, both are bananas\n";

  return 0;
}
//????
