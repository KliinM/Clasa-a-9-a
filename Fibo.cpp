#include <iostream>
using namespace std;
int fibo (int x)
{
    int _out = 0;
    int y=1;
    int i=1;
    while(i<=x)//schimba conditia si formula cu o variabila noua
    {
        _out=_out+y;
        y=_out-y;
          i++;

    }
    x=_out;
    return _out;
}
int main() {
    // Write C++ code here
    cout << "N = ";
    int N;
    cin >> N;
    cout << "FIBO = " << fibo(N);
    return 0;
}
