#include <iostream>
#include "mahasiswa.h"
using namespace std;

void inputmahasiswa(mahasiswa &m) {
    cout << "Input NIM = ";
    cin >> m.NIM;
    cout << "Input Nilai 1 = ";
    cin >> m.nilai1;
    cout << "Input Nilai 2 = ";
    cin >> m.nilai2;
}

float avg(mahasiswa m) {
    return float(m.nilai1 + m.nilai2) / 2;
}