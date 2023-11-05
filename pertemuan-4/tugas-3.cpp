#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "<--------------------------------------------------------------------------------------------------------------------------------------------------->" << endl;
    cout << "Masukkan jumlah bilangan dalam deret Fibonacci: "; // Meminta pengguna untuk memasukkan jumlah bilangan dalam deret Fibonacci
    cin >> n; // Membaca jumlah bilangan dari input pengguna

    int a = 0, b = 1; // Inisialisasi dua bilangan pertama dalam deret Fibonacci
    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; ++i) { // Loop untuk menghasilkan deret Fibonacci sebanyak n bilangan
        cout << a << " "; // Menampilkan bilangan saat ini dalam deret Fibonacci
        int c = a + b; // Menghitung bilangan berikutnya dalam deret Fibonacci
        a = b; // Memindahkan a ke bilangan kedua dalam pasangan (a, b)
        b = c; // Memindahkan b ke bilangan ketiga dalam pasangan (a, b)
    }

    cout << endl; // Pindah ke baris baru setelah menampilkan deret Fibonacci
    cout << "<--------------------------------------------------------------------------------------------------------------------------------------------------->" << endl;

    return 0; // Mengakhiri program
}