#include <iostream>
using namespace std;

// ARITMATIKA
// int main() {
//     int x, y;
//     float hasil;

//     x = 10;
//     y = 3;

//     hasil = float(x) / y;

//     cout << "Hasil: " << hasil << endl;
//     // return 0; -> tdk wajib utk prosedur
// }

// IF-ELSE
// int main() {
//   double total_pembelian, diskon;
//   int hasil;
//   cout << "Total pembelian: Rp";
//   cin >> total_pembelian;

//   if (total_pembelian >= 100000) {
//     diskon = 0.05 * total_pembelian;
//   } else {
//     diskon = 0;
//   }

//   cout << "Hasil: " << hasil << endl;
// }

// SWITCH-CASE
int main() {
  int kode_hari;
  cin >> kode_hari;

  switch (kode_hari) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    cout << "Hari Kerja";
    break;
  case 6:
  case 7:
    cout << "Hari Libur";
    break;
  default:
    cout << "INVALID!!!";
  }
}