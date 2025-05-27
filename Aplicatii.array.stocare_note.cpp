#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int SIZE = 10;
    int int_p, suma = 0, int_min = 11, int_max = 0,media_x10;
    string nume[SIZE] = {"Maria", "Aby", "Laurentiu", "Mihaela", "Petrica", "Elena", "Olivia", "Eva", "Calin", "Luca"};
    int note[SIZE];

    cout << "Introdu nr de copii de la 1 la 10: ";
    cin >> int_p;
    if (int_p < 1 || int_p > SIZE) {
        cout << "Esti prost\n";
        return 0;
    }

    for (int i = 0; i < int_p; i++) {
        cout << nume[i] << " a luat nota: ";
        cin >> note[i];
        if (note[i] < 1 || note[i] > 10) {
            cout << "Esti prost";
            return 0;
        }
        suma += note[i];
        if (note[i] < int_min)
        {
            int_min = note[i];
        }
        if (note[i] > int_max)
        {
            int_max = note[i];
        }
    }

    for (int i = 1; i < int_p; i++) {
        string temp_nume = nume[i];
        int temp_nota = note[i];
        int j = i - 1;
        while (j >= 0 && nume[j] > temp_nume) {
            nume[j + 1] = nume[j];
            note[j + 1] = note[j];
            j--;
        }
        nume[j + 1] = temp_nume;
        note[j + 1] = temp_nota;
    }

    cout << "Cel mai mare numar: " << int_max << "\n";
    cout << "Cel mai mic numar: " << int_min << "\n";
    cout << "Media aritmetica: " << suma / int_p << "." << suma % int_p << "\n";

    cout << "\nElevii sortati alfabetic si notele lor:\n";
    cout << setfill('-') << setw(25) << "-" << endl;
    cout << setw(15) << left << "Elev" << setw(10) << "Nota" << endl;
    cout << setfill('-') << setw(25) << "-" << endl;
    for (int i = 0; i < int_p; i++) {
        cout << setfill(' ') << setw(15) << left << nume[i] << setw(10) << note[i] << endl;
    }
    cout << setfill('-') << setw(25) << "-" << endl;

    cout << "Elevii care indeplinesc conditia |nota - media| < 1:\n";
     media_x10 = (suma * 10) / int_p;
    for (int i = 0; i < int_p; i++) {
        if ((note[i] * 10 - media_x10 > -10) && (note[i] * 10 - media_x10 < 10)) {
            cout << nume[i] << " - Nota: " << note[i] << "\n";
        }
    }

    return 0;
}
