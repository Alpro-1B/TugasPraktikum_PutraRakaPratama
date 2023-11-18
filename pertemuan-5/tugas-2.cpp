#include <iostream>
using namespace std;

void printSpasi(int n) {
    if (n > 0) {
        cout << " ";
        printSpasi(n - 1);
    }
}

void printBintang(int n) {
    if (n > 0) {
        cout << "*";
        printBintang(n - 1);
    }
}

void printKolom(int spasi, int bintang) {
    printSpasi(spasi);
    printBintang(bintang);
    cout << endl;
}

void printSegitiga(int kolom, int baris = 1) {
    if (baris <= kolom) {
        int spasi = kolom - baris;
        int bintang = 2 * baris - 1;

        printKolom(spasi, bintang);

        // Panggil rekursif untuk baris berikutnya
        printSegitiga(kolom, baris + 1);
    }
}

int main() {
    int kolom;

    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;
    // Panggil fungsi rekursif untuk mencetak segitiga
    printSegitiga(kolom);

    return 0;
}