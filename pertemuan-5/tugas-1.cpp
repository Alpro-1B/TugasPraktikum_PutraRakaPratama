#include <iostream>
using namespace std;

int batas, jumlahGanjil=0, jumlahGenap=0, jumlahPrima=0;

void bilanganGanjil();
void bilanganGenap();
void bilanganPrima();
void faktorGanjil();
void faktorGenap();
void faktorPrima();

void bilanganGanjil(){
for (int i = 0; i <= batas; i++){
        if (i % 2 != 0){
            cout << i << " "; // Menampilkan bilangan ganjil
            jumlahGanjil += i;   // Untuk menjumlahkan bilangan ganjil
        }
    }
    cout << endl;
}
void bilanganGenap(){
for (int i = 0; i <= batas; i += 2){
        cout << i << " "; // Menampilkan bilangan genap
        jumlahGenap += i; // Untuk menjumlahkan bilangan genap
    }
    cout << endl;

}
void bilanganPrima(){
for (int i = 2; i <= batas; i++){
        int j; //Untuk mendeklarasi variabel
        for (j = 2; j * j <= i && i % j != 0; j++){
        }
        if (j * j > i){
            cout << i << " "; // Menampilkan bilangan prima
            jumlahPrima += i; // Untuk menjumlahkan bilangan prima
        }
    }
    cout << endl << endl;
}
void faktorGanjil(){
for (int k = 1; k <= jumlahGanjil; k++){
		if (jumlahGanjil % k == 0){
			cout << k << " ";
			}
		}
	cout<< endl;
}
void faktorGenap(){
for (int l = 1; l <= jumlahGenap; l++){
		if (jumlahGenap % l == 0){
			cout << l << " ";
			}
		}
		cout<< endl;
}
void faktorPrima(){
for (int m = 1; m <= jumlahPrima; m++){
		if (jumlahPrima % m == 0){
			cout << m << " ";
			}
		}
    cout << endl;
}

int main() {
    cout << "Masukkan Batas : ";
    cin >> batas;
    cout << "Menampilkan Bilangan Ganjil : ";
    bilanganGanjil();
    cout << "Menampilkan Bilangan Genap : ";
    bilanganGenap();
    cout << "Menampilkan Bilangan Prima : ";
    bilanganPrima();
    cout << "Jumlah bilangan ganjil : " << jumlahGanjil << endl;
    cout << "Jumlah bilangan genap : " << jumlahGenap << endl;
    cout << "Jumlah bilangan Prima : " << jumlahPrima << endl << endl;
    cout << "Faktor Ganjil : ";
    faktorGanjil();
    cout << "Faktor Genap : ";
    faktorGenap();
    cout << "Faktor Prima : ";
    faktorPrima();

    return 0;
}
