#include <iostream>

using namespace std;

int main() {
    int pilih;
    int p, l, a, t; // input panjang (p), lebar (l), alas (a), tinggi (t)

    // pilihan - pilihannya

    cout << "1. Persegi \n\n";
    cout << "2. Persegi Panjang \n\n";
    cout << "3. Segitiga \n\n";
    cout << "Pilihlah bangun datar yang ingin dihitung luasnya: "; // menentukan luas bangun datar yg ingin dicari
    cin >> pilih;

    switch (pilih) {  // mencari pilihan diantara 3 case dibawah ini
        case 1:
            cout << "Masukkan panjang sisi persegi: "; 
            cin >> p; // menginput panjang sisi persegi
            cout << "Luasnya adalah: " << p * p << endl;    // menghitung luas persegi
            break;
        case 2:
            cout << "Masukkan panjang: ";
            cin >> p; // sama kaya diatas
            cout << "Masukkan lebar: ";
            cin >> l; // sama
            cout << "Luasnya adalah " << p * l << endl; // sama beda diprosesnya aja
            break;
        case 3:
            cout << "Masukkan alas: ";
            cin >> a;  // sama
            cout << "Masukkan tinggi: ";
            cin >> t;  // samaa
            cout << "Luasnya adalah: " << 1/2 * a * t << endl;  // ini juga tinggal ganti pake rumus segitiga 
            break;
        default:
            cout << "Tidak valid." << endl; // kalo nge milih case diluar 1, 2, ama 3 ya nga bakal valid
    }

    return 0;
}