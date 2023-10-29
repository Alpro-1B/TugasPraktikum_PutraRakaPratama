#include <iostream>
using namespace std;

int main(){

    int angka; //mendeklarasikan variabel 

    cout << "Masukkan nilai anda (0-100): "; //output untuk variabel input
    cin >> angka;//memasukan nilai yg pengguna inginkan
    
    if (angka > 100 ) { //mengantisipasi user memasukkan input yang tidak sesuai dengan format
        cout << "anda memasukkan nilai yang tidak sesuai"; //output jika user memasukkan nilai yang tidak sesuai format
    } else if(angka >= 90 ) { //memeriksa nilai apakah lebih besar atau sama dengan 90
        cout << "Selamat! Anda mendapatkan nilai A"  << endl; //output jika nilai lebih dari atau sama dengan  90
    } else if (angka >= 80) { //memeriksa nilai apakah lebih besar atau sama dengan 80
        cout << "Anda mendapatkan nilai B" << endl; //output jika nilai lebih dari atau sama dengan  80
    } else  if (angka >= 70) { //memeriksa nilai apakah lebih besar atau sama dengan 70
        cout << "Anda mendapatkan nilai c" << endl; //output jika nilai lebih dari atau sama dengan  70
    } else  if (angka >= 60) { //memeriksa nilai apakah lebih besar atau sama dengan 60
        cout << "Anda mendapatkan nilai D" << endl; //output jika nilai lebih dari atau sama dengan 60
    } else { //memeriksa nilai apakah lebih kecil  60
        cout << "Anda mendapatkan nilai E" << endl; //output jika nilai < 60
    } 
    return 0; //penutup
}