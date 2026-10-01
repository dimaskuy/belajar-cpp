#include <iostream>
using namespace std;

// ADT 1 FILE

struct mahasiswa {
    char NIM[10];
    int nilai1, nilai2;
};

void inputmahasiswa(mahasiswa &m) {
    cout << "Input NIM = ";
    cin >> m.NIM;
    cout << "Input Nilai 1 = ";
    cin >> m.nilai1;
    cout << "Input Nilai 2 = ";
    cin >> m.nilai2;
}

float avg(mahasiswa &m) {
    return float(m.nilai1 + m.nilai2) / 2;
}

int main() {
    mahasiswa mhs1;
    mahasiswa mhs2;

    inputmahasiswa(mhs1);
    cout << "rata-rata: " << avg(mhs1) << endl;

    inputmahasiswa(mhs2);
    cout << "rata-rata: " << avg(mhs2) << endl;

    return 0;
}