#include <iostream>
using namespace std;
int fibo (int x)
{
    int _out = 0;
    while(_out<=100)
    {
        _out=_out+x;
        x=_out-x;
    cout<<_out<<"\n";

    }
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
