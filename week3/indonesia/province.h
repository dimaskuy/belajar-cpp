#ifndef PROVINCE_H
#define PROVINCE_H

#include <iostream>
using namespace std;

struct provinsi {
    string nama;
    string ibukota;
    string kota[19];
    string kabupaten[19];
    int nKota;  // byk kota
    int nKab;   // byk kab
};

void buatProvinsi(provinsi &prov);
void tambahDaerah(provinsi &prov, bool flag);
void tampilProvinsi(provinsi prov);

#endif