#include "stack.h"
#include <iostream>

using namespace std;

int main() {
    stack S;
    int angka;
    createStack_108072500027(S);
    int i = 1;

    while (!isFull_108072500027(S)) {
        cout << "Input angka ke-" << i << ": ";
        cin >> angka;
        push_108072500027(S, angka);
        i++;
    }
    if (isFull_108072500027(S)) {
        cout << "Stack sudah penuh!" << endl;
    }

    cout << endl;
    cout << "Hasil penjumlahan elemen dalam stack: " << sumStack_108072500027(S)
         << endl;

    return 0;
}
