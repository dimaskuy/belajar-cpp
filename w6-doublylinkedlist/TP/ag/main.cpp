#include "DLL.h"
#include <iostream>
using namespace std;

int main() {
    List daftarPertama;
    createList_108072500027(daftarPertama);

    int angkaInput;
    address simpulBaru;

    cout << "masukkan elemen 1: ";
    cin >> angkaInput;
    simpulBaru = allocate_108072500027(angkaInput);
    insertFirst_108072500027(daftarPertama, simpulBaru);

    cout << "masukkan elemen 2 di awal: ";
    cin >> angkaInput;
    simpulBaru = allocate_108072500027(angkaInput);
    insertFirst_108072500027(daftarPertama, simpulBaru);

    cout << "masukkan elemen 3 di akhir: ";
    cin >> angkaInput;
    simpulBaru = allocate_108072500027(angkaInput);
    insertLast_108072500027(daftarPertama, simpulBaru);

    cout << "daftar elemen list: ";
    printInfoFrontToBack_108072500027(daftarPertama);
    cout << endl;

    List daftarKedua;
    createList_108072500027(daftarKedua);

    cout << "masukkan elemen 1: ";
    cin >> angkaInput;
    insertLast_108072500027(daftarKedua, allocate_108072500027(angkaInput));

    cout << "masukkan elemen 2 di akhir: ";
    cin >> angkaInput;
    insertLast_108072500027(daftarKedua, allocate_108072500027(angkaInput));

    cout << "masukkan elemen 3 di akhir: ";
    cin >> angkaInput;
    insertLast_108072500027(daftarKedua, allocate_108072500027(angkaInput));

    address elemenDihapus;
    deleteFirst_108072500027(daftarKedua, elemenDihapus);
    cout << "elemen pertama telah dihapus" << endl;
    delete elemenDihapus;

    deleteLast_108072500027(daftarKedua, elemenDihapus);
    cout << "elemen terakhir telah dihapus" << endl;
    delete elemenDihapus;

    cout << "daftar elemen list: ";
    printInfoFrontToBack_108072500027(daftarKedua);
    cout << endl << endl;

    List daftarKetiga;
    createList_108072500027(daftarKetiga);

    for (int indeks = 1; indeks <= 4; indeks++) {
        cout << "masukkan elemen di akhir: ";
        cin >> angkaInput;
        insertLast_108072500027(daftarKetiga,
                                allocate_108072500027(angkaInput));
    }
    cout << "daftar elemen dari depan ke belakang: ";
    printInfoFrontToBack_108072500027(daftarKetiga);
    cout << "daftar elemen dari belakang ke depan: ";
    printInfoBackToFront_108072500027(daftarKetiga);

    return 0;
}
