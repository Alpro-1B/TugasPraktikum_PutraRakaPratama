#include <iostream>
#include <vector> 

using namespace std;

// untuk memeriksa apakah suatu bilangan merupakan bilangan prima
bool is_prime(int n) {
    if (n <= 1) return false;  // Bilangan kurang dari atau sama dengan 1 bukan prima
    if (n <= 3) return true;   // Bilangan 2 dan 3 adalah prima
    if (n % 2 == 0 || n % 3 == 0) return false;  // Bilangan genap atau kelipatan 3 bukan prima
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;  // Bilangan yang memiliki faktor lain bukan prima
    }
    return true;  // Jika tidak ada faktor selain 1 dan n, maka bilangan adalah prima
}

// Fungsi untuk mencari faktor-faktor suatu bilangan
vector<int> factors(int n) {
    vector<int> factor_list;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factor_list.push_back(i);  // Menambahkan faktor-faktor yang membagi bilangan n
        }
    }
    return factor_list;
}

int main() {
    int batas;
    cout << "Masukkan batas tertentu: ";
    cin >> batas;

    vector<int> ganjil, genap, prima;

    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            genap.push_back(i);  // Memasukkan bilangan genap ke dalam vektor 'genap'
        } else {
            ganjil.push_back(i);  // Memasukkan bilangan ganjil ke dalam vektor 'ganjil'
            if (is_prime(i)) {
                prima.push_back(i);  // Memasukkan bilangan prima ke dalam vektor 'prima'
            }
        }
    }

    cout << "Bilangan Ganjil: ";
    for (int n : ganjil) {
        cout << n << " ";
    }
    cout << endl;

    cout << "Bilangan Genap: ";
    for (int n : genap) {
        cout << n << " ";
    }
    cout << endl;

    cout << "Bilangan Prima: ";
    for (int n : prima) {
        cout << n << " ";
    }
    cout << endl;

    int jumlah_ganjil = ganjil.size();
    int jumlah_genap = genap.size();
    int jumlah_prima = prima.size();

    cout << "Jumlah Bilangan Ganjil: " << jumlah_ganjil << endl;
    cout << "Jumlah Bilangan Genap: " << jumlah_genap << endl;
    cout << "Jumlah Bilangan Prima: " << jumlah_prima;

     cout << "\nFaktor-faktor dari jumlah bilangan ganjil tersebut adalah: ";
    // loop dari angka 1 hingga nilai jumlah bilangan ganjil untuk mencari faktornya
    for (int a = 1; a <= jumlah_ganjil; a++){
        /* jika nilai jumlah bilangan ganjil dibagi suatu angka dari 1 hingga nilai jumlah itu sendiri tidak memiliki sisa bagi,
        maka angka yang menjadi pembagi merupakan faktornya*/
        if (jumlah_ganjil % a == 0){
            // menampilkan faktor-faktornya
            cout << a << " ";
        }
    }

    cout << "\nFaktor-faktor dari jumlah genap tersebut adalah: ";
    // loop dari angka 1 hingga nilai jumlah bilangan genap untuk mencari faktornya
    for (int b = 1; b <= jumlah_genap; b++){
        /* jika nilai jumlah bilangan genap dibagi suatu angka dari 1 hingga nilai jumlah itu sendiri tidak memiliki sisa bagi,
        maka angka yang menjadi pembagi merupakan faktornya*/
        if (jumlah_genap % b == 0){
            // menampilkan faktor-faktornya
            cout << b << " ";
        }
        
    }

    cout << "\nFaktor-faktor dari jumlah prima tersebut adalah: ";
    // loop dari angka 1 hingga nilai jumlah bilangan prima untuk mencari faktornya
    for (int c = 1; c <= jumlah_prima; c++){
        /* jika nilai jumlah bilangan prima dibagi suatu angka dari 1 hingga nilai jumlah itu sendiri tidak memiliki sisa bagi,
        maka angka yang menjadi pembagi merupakan faktornya*/
        if (jumlah_prima % c == 0){
            // menampilkan faktor-faktornya
            cout << c << " ";
        }
        
    }
    return 0;
}