#include <iostream>
using namespace std;

int main (){
    int pilihan;
    float panjang, lebar, sisi, alas, tinggi, luas;

    cout << "Pilih bentuk yang akan dihitung luasnya:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Masukan pilihan (1/2/3):";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukan sisi Persegi:";
            cin >> sisi;
            luas = sisi*sisi;
            cout << "Luas Persegi adalah:" << luas << endl;
            break;

        case 2:
            cout << "Masukan Panjang:";
            cin >> panjang;
            cout << "Masukan Lebar:";
            cin >> lebar;
            luas = panjang*lebar;
            cout << "Luas Persegi Panjang adalah:" << luas << endl;
            break;

        case 3:
            cout << "Masukan Alas:";
            cin >> alas;
            cout << "Masukan Tinggi:";
            cin >> tinggi;
            luas = 0.5*alas*tinggi;
            cout << "Luas Segitiga adalah:" << luas << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}
