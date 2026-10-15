#include "SLL.h"
#include <iostream>

using namespace std;

int main() {
    List L;

    createList(L);

    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    addNewElementList(L, n);

    cout << "List sebelum diurutkan: ";
    printInfo(L);

    selectionSort(L); // Tidak perlu &L lagi

    cout << "List setelah diurutkan: ";
    printInfo(L);

    return 0;
}