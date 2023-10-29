#include <iostream>
using namespace std;

int main(){
    //pembukaan 
    cout << "Selamat Datang di Program Menghitung Luas Bangun Datar"<<endl;
    cout << "*Satuan yang digunakan dalam program ini adalah sentimeter (cm)."<<endl; 
    cout << "*Jika ingin menggunakan angka desimal, gunakan tanda titik (.) sebagai tanda koma (,)"<<endl; 
    cout << "*Harap masukkan nilai tanpa menyertakan satuan."<<endl <<endl; 

    int opsi;
    // float digunakan karena nilai luas dan sisi-sisi bisa bernilai desimal
    float luas, sisi, panjang, lebar, alas, tinggi;// mendeklarasikan variabel
    cout << "Pilih bangun datar yang akan dihitung: "<<endl;
    cout << "1. Persegi"<<endl;
    cout << "2. Persegi panjang"<<endl;
    cout << "3. Segitiga"<<endl;
    // meminta input pilihan kepada pengguna
    cin >> opsi;

    // Proses mencari luas bangun datar tersebut menggunakan switch case
    switch (opsi){
    // jika pengguna memilih 1, maka bangun datarnya adalah persegi
    case 1:
        cout << "Anda memilih persegi."<<endl;
        cout << "Silakan masukkan nilai sisi: ";
        // meminta input nilai sisi kepada pengguna
        cin >> sisi;
        // memasukkan nilai luas ke variabel 'luas' setelah nilai sisi dioperasikan sesuai rumus luas bangun datar yang dipilih
        luas = sisi*sisi;
        // menampilkan hasil perhitungan luas
        cout << "Luas persegi adalah: " << luas << "cm²"<<endl;
        cout << "Terima kasih!";
        break;
    case 2:
    // jika pengguna memilih 2, maka bangun datarnya adalah persegi panjang
        cout << "Anda memilih persegi panjang."<<endl;
        cout << "Silakan masukkan nilai panjang: ";
        // meminta input nilai panjang kepada pengguna
        cin >> panjang;
        cout << "Silakan masukkan nilai lebar: ";
        // meminta input nilai lebar kepada pengguna
        cin >> lebar;
        // memasukkan nilai luas ke variabel 'luas' setelah nilai panjang dan lebar dioperasikan sesuai rumus luas bangun datar yang dipilih
        luas = panjang*lebar;
        // menampilkan hasil perhitungan luas
        cout << "Luas persegi panjang adalah: " << luas << "cm²"<<endl;
        cout << "Terima kasih!";
        break;
    case 3:
    // jika pengguna memilih 3, maka bangun datarnya adalah segitiga
        cout << "Anda memilih segitiga."<<endl;
        cout << "Silakan masukkan nilai alas: ";
        // meminta input nilai alas kepada pengguna
        cin >> alas;
        cout << "Silakan masukkan nilai tinggi: ";
        // meminta input nilai tinggi kepada pengguna
        cin >> tinggi;
        // memasukkan nilai luas ke variabel 'luas' setelah nilai alas dan tinggi dioperasikan sesuai rumus luas bangun datar yang dipilih
        luas = (alas*tinggi)/2;
        // menampilkan hasil perhitungan luas
        cout << "Luas segitiga adalah: " << luas << "cm²"<<endl;
        cout << "Terima kasih!";
        break;
    
    default:
    // jika pengguna memilih pilihan selain 1-3, akan menampilkan pesan seperti berikut
        cout << "Pilihan anda invalid.";
        break;
    }

    return 0;
}