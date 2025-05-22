#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int SIZE = 10;
    int int_p, int_n = 0, int_min, int_max;
    string int_nume_copii[SIZE] = {"Maria", "Aby", "Laurentiu", "Mihaela", "Petrica", "Elena", "Olivia", "Eva", "Calin", "Luca"};
    int int_copii_note[SIZE];

    cout << "Introdu nr de copii de la 1 la 10: ";
    cin >> int_p;
    if (int_p > SIZE || int_p < 1) {
        cout << "ESTI prost" << endl;
        return 0;
    }

    for (int i = 0; i < int_p; i++) {
        cout << int_nume_copii[i] << " a luat nota: ";
        cin >> int_copii_note[i];
        int_n += int_copii_note[i];

        if (i == 0) {
            int_min = int_max = int_copii_note[i];
        } else {
            if (int_copii_note[i] < int_min) {
                int_min = int_copii_note[i];
            }
            if (int_copii_note[i] > int_max) {
                int_max = int_copii_note[i];
            }
        }
    }

    int parte_intreaga_media = int_n / int_p;
    int rest_media = int_n % int_p;

    cout << "Cel mai mare numar: " << int_max << "\n";
    cout << "Cel mai mic numar: " << int_min << "\n";
    cout << "Media aritmetica a elevilor este: " << parte_intreaga_media << "." << rest_media << "\n";

    cout << "Elevii sortati alfabetic si notele lor:\n";
    cout << setfill('-') << setw(25) << "-" << endl;
    cout << setfill(' ') << setw(15) << left << "Elev" << setw(10) << "Nota" << endl;
    cout << setfill('-') << setw(25) << "-" << endl;

    for (int i = 0; i < int_p; i++) {
        cout << setfill(' ') << setw(15) << left << int_nume_copii[i] << setw(10) << int_copii_note[i] << endl;
    }

    cout << setfill('-') << setw(25) << "-" << endl;


    cout << "Elevii care indeplinesc conditia |nota - media| < 1\n";
    for (int i = 0; i < int_p; i++) {
        if (int_copii_note[i] >= parte_intreaga_media && int_copii_note[i] <= parte_intreaga_media + 1) {
            cout << int_nume_copii[i] << " - Nota: " << int_copii_note[i] << "\n";
        }
    }

    return 0;
}
