#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main (){
  /* int a[6],i;
   for(i=0;i<=6;i++)
   {
    cin>>a[i];
   }*/
   int b[6],y=0;
   while(y<=6)
   {
       cin>>b[y];
       y+=2;
   }
       for(y=1;y<6;y+=2)
       {
           cin>>b[y];
       }
           for(y=0;y<=6;y++)
           {
               cout<<b[y];
           }
           return 0;
}
