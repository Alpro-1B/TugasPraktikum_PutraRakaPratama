#include <iostream>
using namespace std;

int main() {
    int spasi, kolom;// mendeklarasikan variabel

    cout << "Masukkan jumlah kolom: ";// meminta pengguna memasukan kolom yang diinginkan
    cin >> kolom ;// meminta pengguna memasukan kolom yang diinginkan

    // proses pembuatan segitiga
    for (int i = 1, k = 0; i <= kolom; ++i, k = 0) {
        for (spasi = 1; spasi <= kolom - i; ++spasi) {
            cout << "  ";
        }

        while (k != 2 * i - 1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    return 0;
}