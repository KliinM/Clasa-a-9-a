#include <iostream>
#include <sstream>
#include<string>
using namespace std;
bool isNumber(const string& s)
{
    for (char c : s) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}
int main(){
    int int_copii,int_p=1,int_n=0;//int,string,long,char,bool,date,float
    string str_q1="cati copii sunt in clasa a 10 a la data de 29 Apr 2025?:";
    string str_note;
    cout<<str_q1;
    cin>>int_copii;
    int int_note[int_copii];
   do
    {  cout<<"Nota copilui cu numarul "<<int_p<<" este"<<":";
        cin>>str_note;
        if(isNumber(str_note))
        {
            int_note[int_p]=stoi(str_note);
            int_p++;
            int_n=0;
        }
        else{

          cout<<"Ai introdus o valoare non-numerica. EROARE!\n";
            int_n++;

        }
    if(int_n==4)
    {   cout<<"esti prost";
        return 0;
    }

        }
        while(int_p!=int_copii+1);

    }


