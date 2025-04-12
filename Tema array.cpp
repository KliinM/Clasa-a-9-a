#include <string>
#include <iostream>
using namespace std;

int main() {

  int lungime = 0,suma = 0,sumap=0,produsI=1,i=0;
 long poz=0;
 int poz2;
  cout << "Lungime = " ;
  cin >> lungime;
  int cars[lungime]; // = {"Volvo", "BMW", "Ford", "Mazda"};
  for (int i = 0; i< lungime; i++)
  {
  cout << "cars[" << i << "] =";
    cin >> cars[i];
    suma+=cars[i];
    if(i%2==0 || i==0)
    {
         sumap+=cars[i];
    }
            if(i%2==1 )
            {
                produsI*=cars[i];
              }
                    if(i%3==0)
                      {
                          poz=cars[i]-poz;
                      }
                    //cout << cars[i] <<"\n";
  }







  
  cout << suma <<"\n";
  cout<<sumap<<"\n";
  cout<<produsI<<"\n";
  cout<<poz;
  return 0;
}
