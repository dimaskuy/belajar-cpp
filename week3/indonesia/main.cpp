// g++ main.cpp province.cpp -o main
#include "province.h"
#include <iostream>
using namespace std;

int main() {
    provinsi jawaBarat, jambi, sumateraBarat, yogyakarta;

    jawaBarat.nama = "West_Java";
    jawaBarat.ibukota = "Bandung";
    jawaBarat.nKota = 0;
    jawaBarat.nKab = 0;

    jawaBarat.kota[jawaBarat.nKota++] = "Cimahi_City";
    jawaBarat.kabupaten[jawaBarat.nKab++] = "Garut_District";
    jawaBarat.kota[jawaBarat.nKota++] = "Bandung_City";
    jawaBarat.kabupaten[jawaBarat.nKab++] = "Sumedang_District";

    jambi.nama = "Jambi";
    jambi.ibukota = "Jambi";
    jambi.nKota = 0;
    jambi.nKab = 0;

    jambi.kota[jambi.nKota++] = "Sungai_Penuh_City";
    jambi.kabupaten[jambi.nKab++] = "Batanghari_District";

    sumateraBarat.nama = "West_Sumatera";
    sumateraBarat.ibukota = "Padang";
    sumateraBarat.nKota = 0;
    sumateraBarat.nKab = 0;

    sumateraBarat.kota[sumateraBarat.nKota++] = "Solok_City";
    sumateraBarat.kabupaten[sumateraBarat.nKab++] = "Agam_District";
    sumateraBarat.kabupaten[sumateraBarat.nKab++] = "Darmasraya_District";
    sumateraBarat.kabupaten[sumateraBarat.nKab++] = "Tanah_Datar_District";
    sumateraBarat.kota[sumateraBarat.nKota++] = "Sawahlunto_City";

    yogyakarta.nama = "Yogyakarta";
    yogyakarta.ibukota = "Jogja";
    yogyakarta.nKota = 0;
    yogyakarta.nKab = 0;

    yogyakarta.kabupaten[yogyakarta.nKab++] = "Sleman_District";
    yogyakarta.kabupaten[yogyakarta.nKab++] = "Bantul_District";
    yogyakarta.kabupaten[yogyakarta.nKab++] = "Kulon_Progo_District";

    tampilProvinsi(jawaBarat);
    tampilProvinsi(jambi);
    tampilProvinsi(sumateraBarat);
    tampilProvinsi(yogyakarta);

    return 0;
}