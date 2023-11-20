#include <iostream>
using namespace std;
int main() {
    const int indeks = 5; // Ubah sesuai kebutuhan
    int Array[indeks];
    // Input nilai ke dalam array
    cout << "Masukkan " << indeks << " nilai ke dalam array:\n";
    for (int i = 0; i < indeks; ++i) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> Array[i];
    }
    // Mencari nilai tertinggi dan indeksnya
    int nilaiTertinggi = Array[0];
    int indeksTeringgi = 0;
    for (int i = 1; i < indeks; ++i) {
        if (Array[i] > nilaiTertinggi) {
            nilaiTertinggi = Array[i];
            indeksTeringgi = i;
        }
    }
    cout << " " << endl;
    //menampilkan indeks dari array
    cout << "Bilangan: " << endl;

for (int j = 0; j < indeks; ++j)
{
cout << "indeks["<< j <<"] :" << Array[j] << endl;
}
    // Menampilkan nilai teringgi beserta indeks
    cout << "Nilai tertinggi dalam array adalah: " << nilaiTertinggi << std::endl;
    if (indeksTeringgi != -1) {
        cout << "Nilai tersebut ditemukan pada indeks: " << indeksTeringgi << std::endl;
    } else {
        cout << "Nilai tersebut tidak ditemukan dalam array." << std::endl;
    }
    return 0;
}
