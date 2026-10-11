#include <iostream>
using namespace std;

// int operasi(int x, int y, int z) {
//     int jumlah = (x+y+z);
//     int kekuatan = jumlah * z;
//     return kekuatan;
// }
void operasi(int x, int y, int z) {
    int jumlah = (x+y+z);
    int kekuatan = jumlah * z;
    cout << "hasil dari kekuatan x, y, dan z adalah " << kekuatan << endl;
}

int main() {
    int A, B, C;
    int angka = 10;
    cout << "nilai dari angka adalah " << &angka << endl;
    
    cout << "Bilangan A: ";
    cin >> A;

    cout << "Bilangan B: ";
    cin >> B;

    cout << "Bilangan C: ";
    cin >> C;

    operasi(A,B,C);
    // int hasil = operasi(A,B,C);
    // cout << "hasil dari kekuatan x, y, dan z adalah " << hasil << endl;
}