// PROGRAM MENENTUKAN SCORE DENGAN OPERATOR PERBANDINGAN

// mulai
#include <iostream>

using namespace std;

// prep
int main() {
    int score;
    cout << "Masukkan nilai Anda: ";
    cin >> score;   // input score

    if (score >= 90 && score <= 100) { // proses1
    cout << "Selamat! Anda mendapatkan nilai A. \n\n";   // Output yang dihasilkan jika nilai lebih dari 90 akan mendapat score A.
    } else if (score >= 80 && score < 90) { //proses2
    cout << "Anda mendapatkan score B.\n\n";    // Output yang dihasilkan jika nilai lebih dari atau sama dengan 80 dan kurang dari 89 akan mendapat score B.
    } else if (score >= 70 && score < 80) { //proses3
    cout << "Anda mendapatkan score C.\n\n";    // Output yang dihasilkan jika nilai lebih dari atau sama dengan 70 dan kurang dari 79 akan mendapat score C.
    } else if (score >= 60 && score < 70) { //proses4
    cout << "Anda mendapatkan score D.\n\n";    // Output yang dihasilkan jika nilai lebih dari atau sama dengan 60 dan kurang dari 69 akan mendapat score D.
    } else if (score >= 0 && score < 60) { //proses5
    cout << "Anda mendapatkan score E.\n\n";    // Output yang dihasilkan jika nilai kurang dari 60 akan mendapat score E.
    } else { //proses terakhir
    cout << "Tolong masukkan nilai yang benar kang"; // Output yang dihasilkan jika Input di luar nilai yang telah ditentukan.
    }

    return 0; // program selesai
}