// g++ main.cpp SLL.cpp -o main
#include "SLL.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    list L;
    createList(L);

    infotype dataProduk;
    for (int i = 1; i <= 5; i++) {
        cout << "Masukkan data produk ke-" << i << ": ";
        cin >> dataProduk;
        address P = allocate(dataProduk);
        insertLast(L, P);
    }

    cout << endl;
    cout << "Daftar produk saat ini adalah: ";
    printInfo(L);
    cout << endl;

    infotype cari;
    cout << "Masukkan data produk yang ingin dicari: ";
    cin >> cari;

    if (!isEmpty(L)) {
        address lokasi = findInfo(L, cari);
        if (lokasi != Nil) {
            cout << "Produk ditemukan pada alamat " << lokasi << endl;
        } else {
            cout << "Maaf, produk tidak ditemukan" << endl;
        }
    }
    cout << endl;

    cout << "Daftar awal produk: ";
    printInfo(L);

    while (!isEmpty(L)) {
        string pilihan;
        cout << "Lokasi produk yang dihapus (depan/belakang)? ";
        cin >> pilihan;

        address P = Nil;
        if (pilihan == "depan") {
            deleteFirst(L, P);
        } else if (pilihan == "belakang") {
            deleteLast(L, P);
        } else {
            cout << "Pilihan tidak valid! Masukkan 'depan' atau 'belakang'."
                 << endl;
            continue;
        }

        if (P != Nil) {
            delete P; // Membebaskan memori node yang dihapus
        }

        cout << "Daftar setelah dihapus: ";
        printInfo(L);
    }

    cout << "SELESAI" << endl;

    return 0;
}