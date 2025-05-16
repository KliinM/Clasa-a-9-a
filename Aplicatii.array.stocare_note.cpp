#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main() {
    const int SIZE = 10;
    int int_p, int_n = 0, int_min, int_max;
    string int_nume_copii[SIZE] = {"Maria", "Aby", "Laurentiu", "Mihaela", "Petrica", "Elena", "Olivia", "Eva", "Calin", "Luca"};
    int int_copii_note[SIZE];

    cout << "Introdu nr de copii de la 1 la 10: ";
    cin >> int_p;
    if (int_p > SIZE || int_p < 1) {
        cout << "Numar invalid de copii!" << endl;
        return 0;
    }

    for (int i = 0; i < int_p; i++) {
        cout << int_nume_copii[i] << " a luat nota: ";
        cin >> int_copii_note[i];
        int_n += int_copii_note[i];

        if (i == 0) {
            int_min = int_max = int_copii_note[i];
        } else {
            if (int_copii_note[i] < int_min)
            {
                int_min = int_copii_note[i];
            }
            if (int_copii_note[i] > int_max)
            {
                int_max = int_copii_note[i];
            }
        }
    }


    for (int i = 0; i < int_p - 1; i++) {
        for (int j = 0; j < int_p - i - 1; j++) {
            if (int_nume_copii[j] > int_nume_copii[j + 1]) {
                string temp_nume = int_nume_copii[j];     //declaratia variabilei o faci in afara "for"-urilor
                int temp_nota = int_copii_note[j];        //declaratia variabilei o faci in afara "for"-urilor

                int_nume_copii[j] = int_nume_copii[j + 1];
                int_copii_note[j] = int_copii_note[j + 1];

                int_nume_copii[j + 1] = temp_nume;//cautat pe internet
                int_copii_note[j + 1] = temp_nota;//cautat pe internet
            }
        }
    }


    cout << "Cel mai mare numar: " << int_max<<"\n";
    cout << "Cel mai mic numar: " << int_min<<"\n";
    cout << "Media aritmetica a elevilor este: " << int_n / int_p << "." << int_n % int_p << "\n";


    cout << "Elevii sortati alfabetic si notele lor:\n";
    cout << setfill('-') << setw(25) << "-" << endl;
    cout << setfill(' ') << setw(15) << left << "Elev" << setw(10) << "Nota" << endl;
    cout << setfill('-') << setw(25) << "-" << endl;

    for (int i = 0; i < int_p; i++) {
        cout << setfill(' ') << setw(15) << left << int_nume_copii[i]<< setw(10) << int_copii_note[i] << endl;
    }

    cout << setfill('-') << setw(25) << "-" << endl;

    return 0;
}
