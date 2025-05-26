#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
    const int SIZE = 10;
    int int_p, int_n = 0, int_min, int_max =0, j;
    string temp_nume;
    string int_nume_copii[SIZE] = {"Maria", "Aby", "Laurentiu", "Mihaela", "Petrica", "Elena", "Olivia", "Eva", "Calin", "Luca"};
    int int_copii_note[SIZE];

    cout << "Introdu nr de copii de la 1 la 10: ";
    cin >> int_p;

    if (int_p < 1 || int_p > SIZE) {
        cout << "Numar invalid. Program terminat.\n";
        return 0;
    }

    for (int i = 0; i < int_p; i++) {
        cout << int_nume_copii[i] << " a luat nota: ";
        cin >> int_copii_note[i];

        if (int_copii_note[i] < 1 || int_copii_note[i] > 10) {
            cout << "Nota invalida. Program terminat.\n";
            return 0;
        }

        int_n += int_copii_note[i];
        if (int_copii_note[i] < int_min)
        {
            int_min = int_copii_note[i];
        }
        if (int_copii_note[i] > int_max)
        {
            int_max = int_copii_note[i];
        }
    }


    for (int i = 1; i < int_p; i++) {
        temp_nume = int_nume_copii[i];
        int temp_nota = int_copii_note[i];
        j = i - 1;
        while (j >= 0 && int_nume_copii[j] > temp_nume) {
            int_nume_copii[j + 1] = int_nume_copii[j];
            int_copii_note[j + 1] = int_copii_note[j];
            j--;
        }
        int_nume_copii[j + 1] = temp_nume;
        int_copii_note[j + 1] = temp_nota;
    }

    int parte_intreaga_media = int_n / int_p;
    int rest_media = int_n % int_p;

    cout << "Cel mai mare numar: " << int_max << "\n";
    cout << "Cel mai mic numar: " << int_min << "\n";
    cout << "Media aritmetica: " << parte_intreaga_media << "." << rest_media << "\n";

    cout << "Elevii sortati alfabetic si notele lor:\n";
    cout << setfill('-') << setw(25) << "-" << endl;
    cout << setfill(' ') << setw(15) << left << "Elev" << setw(10) << "Nota" << endl;
    cout << setfill('-') << setw(25) << "-" << endl;

    for (int i = 0; i < int_p; i++) {
        cout << setfill(' ') << setw(15) << left << int_nume_copii[i] << setw(10) << int_copii_note[i] << endl;
    }

    cout << setfill('-') << setw(25) << "-" << endl;

    cout << "Elevii care indeplinesc conditia |nota - media| < 1:\n";
    int media_extinsa = (int_n * 10) / int_p;

    for (int i = 0; i < int_p; i++) {
        if (abs(int_copii_note[i] * 10 - media_extinsa) < 10) {
            cout << int_nume_copii[i] << " - Nota: " << int_copii_note[i] << "\n";
        }
    }

    return 0;
}
