#include <iostream>
using namespace std;

int main() {
    // Mendeklarasikan array
    int array[10] = {10, 5, 8, 15, 7, 13, 19, 20, 25, 47};
    // Mencari nilai tertinggi dan indeksnya
    int nilai_tertinggi = array[0];
    int indeks_tertinggi = 0;

    for (int i = 1; i < sizeof(array) / sizeof(array[0]); ++i) {
        if (array[i] > nilai_tertinggi) {
            nilai_tertinggi = array[i];
            indeks_tertinggi = i;
        }
    }
    // Menampilkan hasil array
    cout << "Array: [";
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        cout << array[i];
        if (i < sizeof(array) / sizeof(array[0]) - 1) {
            cout << ", ";
        }
    }
    cout << "]"<<endl;
    //menampilkan nilai tertinggi beserta indeks
    cout << "Nilai tertinggi: " << nilai_tertinggi << "\n";
    if (indeks_tertinggi != -1) {
        cout << "Indeks nilai tertinggi: " << indeks_tertinggi << "\n";
    } 
    return 0;
}
