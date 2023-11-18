#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung bilangan Fibonacci ke-n
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Fungsi untuk mencetak deret Fibonacci hingga n
void membuatderetfibonacci(int n) {
    cout << "Deret Fibonacci hingga ke-" << n << ": ";
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Masukkan jumlah bilangan Fibonacci yang ingin dihasilkan: ";
    cin >> n;

    // Memanggil fungsi untuk mencetak deret Fibonacci
    membuatderetfibonacci(n);

    return 0;
}
