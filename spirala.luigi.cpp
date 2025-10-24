#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cout << "Introdu numarul de randuri si coloane: ";
    cin >> n >> m;

    int a[100][100];
    cout << "Introdu elementele matricei"<<n<<" x "<<m<<"\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
int v[10000], k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            v[k++] = a[i][j];
int b[100][100];
int top = 0, bottom = n - 1;
int left = 0, right = m - 1;
int index = 0;
 while (top <= bottom && left <= right) {
        for (int j = left; j <= right && index < k; j++)
            b[top][j] = v[index++];
        top++;

        for (int i = top; i <= bottom && index < k; i++)
            b[i][right] = v[index++];
        right--;

        for (int j = right; j >= left && index < k; j--)
            b[bottom][j] = v[index++];
        bottom--;

        for (int i = bottom; i >= top && index < k; i--)
            b[i][left] = v[index++];
        left++;
    }
    cout << "\nMatricea afisata in spirala (GEN PATRAT):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        cout << setw(4) << b[i][j];
        cout << endl;
    }

    return 0;
}
