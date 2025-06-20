#include <iostream>
#include <iomanip>
using namespace std;
void display_array (string arr_CapeteTabel[], string arr_Valori[][])
{
    /*
    int lungimeTotala = nrColoane * LATIME_CELULA;
    for (int i = 0; i < lungimeTotala; i++) cout << "-";
    cout << endl;

    for (int i = 0; i < nrColoane; i++) {
        cout << setw(LATIME_CELULA) << left << capeteColoane[i];
    }
    cout << endl;

    for (int i = 0; i < lungimeTotala; i++) cout << "-";
    cout << endl;

    for (int i = 0; i < nrRanduri; i++) {
        for (int j = 0; j < nrColoane; j++) {
            cout << setw(LATIME_CELULA) << left << tabel[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < lungimeTotala; i++) cout << "-";
    cout << endl;
    */
    
}
int main() {
    const int MAX_COLOANE = 10;
    const int MAX_RANDURI = 20;
    const int LATIME_CELULA = 15;
//input
    string capeteColoane[MAX_COLOANE];
    string tabel[MAX_RANDURI][MAX_COLOANE];

    int nrColoane, nrRanduri;

    cout << "Cate coloane vrei? ";
    cin >> nrColoane;

    cout << "Introdu numele coloanelor (fara spatii):\n";
    for (int i = 0; i < nrColoane; i++) {
        cout << "Coloana " << i + 1 << ": ";
        cin >> capeteColoane[i];
    }

    cout << "Cate randuri vrei sa introduci? ";
    cin >> nrRanduri;

    for (int i = 0; i < nrRanduri; i++) {
        cout << "Randul " << i + 1 << ":\n";
        for (int j = 0; j < nrColoane; j++) {
            cout << capeteColoane[j] << ": ";
            cin >> tabel[i][j];
        }
    }
    
// display 
    display_array(capeteColoane[j], tabel[i][j])
    

    return 0;
