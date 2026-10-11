#include <iostream>
#include "list.h"
using namespace std;

int main() {
    List L;
    infotype x;
    address p;
    // 1. Panggilah prosedur createList()
    createList(L);
    // 2. Menanyakan angka pertama yang ingin diinputkan user ke List
    cout << "Masukkan angka 1: ";
    cin >> x;
    // 3. Panggil fungsi allocate() agar data tersebut dijadikan elemen
    p = allocate(x);
    // 4. Panggil prosedur insertFirst()
    insertFirst(L, p);
    // 5. Panggil prosedur printInfo() untuk mengecek
    cout << "List saat ini: ";
    printInfo(L);

    cout << "Masukkan angka 2: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);
    cout << "List saat ini: ";
    printInfo(L);

    cout << "Masukkan angka 3: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);
    cout << "List saat ini: ";
    printInfo(L);

    return 0;
}