#include "DLL.h"
#include <iostream>
using namespace std;

int main() {
    List L2;
    createList_108072500034(L2);

    int val;
    address p;

    cout << "masukkan elemen pertama: ";
    cin >> val;
    p = allocate_108072500034(val);
    insertFirst_108072500034(L2, p);

    cout << "masukkan elemen kedua di awal: ";
    cin >> val;
    p = allocate_108072500034(val);
    insertFirst_108072500034(L2, p);

    cout << "masukkan elemen ketiga di akhir: ";
    cin >> val;
    p = allocate_108072500034(val);
    insertLast_108072500034(L2, p);

    cout << "daftar elemen list: ";
    printInfoFrontToBack_108072500034(L2);
    cout << endl << endl;

    List L3;
    createList_108072500034(L3);

    cout << "masukkan elemen pertama: ";
    cin >> val;
    insertLast_108072500034(L3, allocate_108072500034(val));

    cout << "masukkan elemen kedua di akhir: ";
    cin >> val;
    insertLast_108072500034(L3, allocate_108072500034(val));

    cout << "masukkan elemen ketiga di akhir: ";
    cin >> val;
    insertLast_108072500034(L3, allocate_108072500034(val));

    address delNode;
    deleteFirst_108072500034(L3, delNode);
    cout << "elemen pertama telah dihapus" << endl;
    delete delNode;

    deleteLast_108072500034(L3, delNode);
    cout << "elemen terakhir telah dihapus" << endl;
    delete delNode;

    cout << "daftar elemen list: ";
    printInfoFrontToBack_108072500034(L3);
    cout << endl << endl;

    List L4;
    createList_108072500034(L4);

    for (int i = 1; i <= 4; i++) {
        cout << "masukkan elemen di akhir: ";
        cin >> val;
        insertLast_108072500034(L4, allocate_108072500034(val));
    }

    cout << "daftar elemen dari depan ke belakang: ";
    printInfoFrontToBack_108072500034(L4);

    cout << "daftar elemen dari belakang ke depan: ";
    printInfoBackToFront_108072500034(L4);

    return 0;
}