// mulai
#include <iostream>

using namespace std;

// prep
int main() {
    int angka1, angka2, angka3;
    cout << "Masukkan tiga angka: ";
    cin >> angka1 >> angka2 >> angka3; // input angka

    // proses menentukan nilai terbesar
    int terbesar = angka1;
    if (angka2 > terbesar) { 
        terbesar = angka2;
    }
    if (angka3 > terbesar) {
        terbesar = angka3;
    }
    cout << "Angka terbesarnya adalah " << terbesar << endl; // Output menghasilkan salah satu angka yang paling besar

    return 0;
}