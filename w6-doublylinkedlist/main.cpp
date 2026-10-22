#include "DLL.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    createList(L);

    address p;
    infotype x;

    for (int i = 1; i <= 5; i++) {
        cout << "input elemen di akhir ke-" << i << ": ";
        cin >> x;
        p = allocate(x);
        insertLast(L, p);
    }

    cout << "daftar elemen list: ";
    printInfo(L);

    reverseList(L);

    cout << "daftar elemen list abis di reverse: ";
    printInfo(L);

    return 0;
}