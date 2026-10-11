// run -> g++ main.cpp mahasiswa.cpp -o main
#include "mahasiswa.h"
#include <iostream>
using namespace std;

int main() {
    mahasiswa mhs1;
    mahasiswa mhs2;

    inputmahasiswa(mhs1);
    cout << "rata-rata: " << avg(mhs1) << endl;

    inputmahasiswa(mhs2);
    cout << "rata-rata: " << avg(mhs2) << endl;

    return 0;
}