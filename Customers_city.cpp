#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main() {

    ifstream f("customers-100.csv");
    char l[1000];
    char orase[1000][1000];
    int n = 0, i, j, num;
    f.getline(l, 1000);

    while (f.getline(l, 1000))
    {
        int x = 0;
        bool g = false;
        char c[1000];
        int k = 0;
        int t = 0;
        while (1)
        {
            if (l[t] == '"')g =!g;

            if ((l[t]==','&&!g) || l[t]=='\0')
            {
                c[k] = '\0';

                if (x==5)
                {
                    strcpy(orase[n], c);
                    n++;
                }

                x++;
                k = 0;
                if (l[t]=='\0') break;
            }
            else
            {
                c[k]=l[t];
                k++;
            }

            t++;
        }
    }

    f.close();

    for (i=0;i<n;i++)
    {
        num = 0;
        for (int j = 0; j < n; j++)
        {
            if (strcmp(orase[i], orase[j]) == 0) num++;

        }
        cout << orase[i] << " apare de " << num << " ori\n";
    }

    return 0;
}

