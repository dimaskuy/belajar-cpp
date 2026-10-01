#include "province.h"
#include <iostream>
using namespace std;

void buatProvinsi(provinsi &prov) {
    cout << "INPUT UNDESCORE (_) UNTUK MENGGANTI SPASI!!!" << endl;
    cout << "Masukkan nama provinsi: ";
    cin >> prov.nama;
    cout << "Masukkan nama ibu kota: ";
    cin >> prov.ibukota;
    prov.nKab = 0;
    prov.nKota = 0;
}

// true = kota, false = kabupaten
void tambahDaerah(provinsi &prov, bool flag) {
    if (!flag) {
        cout << "Nama kabupaten " << prov.nKab + 1 << ": ";
        cin >> prov.kabupaten[prov.nKab];
        prov.nKab++;
    } else {
        cout << "Nama kota " << prov.nKota + 1 << ": ";
        cin >> prov.kota[prov.nKota];
        prov.nKota++;
    }
}

void tampilProvinsi(provinsi prov) {
    cout << "Provinsi: " << prov.nama << endl;
    cout << "Ibu Kota: " << prov.ibukota << endl;
    cout << "Banyaknya Kota dan Kabupaten dari " << prov.ibukota << " adalah " << prov.nKota + prov.nKab << endl;
}