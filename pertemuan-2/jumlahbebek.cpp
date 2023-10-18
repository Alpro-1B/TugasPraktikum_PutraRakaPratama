#include <iostream>

using namespace std;

int main() {
    int N, M; 

    cout << "N: ";
    cin >> N;

    cout << "M: ";
    cin >> M;

    int jumlahPerTeman = N / M; 
    int sisaBebek = N % M; 

    cout << "Setiap teman akan menerima bebek " << jumlahPerTeman << " bebek." << endl;
    cout << "Sisa bebek yang tersisa adalah " << sisaBebek << " ekor." << endl;

    return 0;
}