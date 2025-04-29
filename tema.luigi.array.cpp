#include <iostream>
using namespace std;
int main(){
const int SIZE=9;
int foo[SIZE][SIZE];;
int i=1,n=1;
for(int m=1;m<10;m++)
{
    cout<<m<<"  ";
}
cout<<endl;
while(i<10)
{   if(n==1)
    {
        cout<<i<<" |";
    }
        foo[SIZE][SIZE]=i*n;
    cout<<foo[SIZE][SIZE]<<" ";
    n++;
  if(n==10)
  {
      i++;
      cout<<endl;
      n=1;
  }



}



}
