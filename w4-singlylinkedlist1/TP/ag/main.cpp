#include <iostream>
#include "list.h"
using namespace std;

int main() {
    List L;
    infotype angka;
    address p;
    createList(L);

    cout << "Masukkan digit untuk elemen 1: ";
    cin >> angka;
    p = allocate(angka);
    insertFirst(L, p);
    cout << "Isi List: ";
    printInfo(L);

    cout << "Masukkan digit untuk elemen 2: ";
    cin >> angka;
    p = allocate(angka);
    insertFirst(L, p);
    cout << "Isi List: ";
    printInfo(L);
    
    cout << "Masukkan digit untuk elemen 3: ";
    cin >> angka;
    p = allocate(angka);
    insertFirst(L, p);
    cout << "Isi List: ";
    printInfo(L);
    return 0;
}