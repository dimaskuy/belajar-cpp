#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    stack S;
    createStack_108072500034(S);
    infotype x;

    for (int i = 1; i <= MAXSTACK; i++) {
        cout << "input angka ke-" << i << ": ";
        cin >> x;
        push_108072500034(S, i);
    }

    if (isFull_108072500034(S)) {
        cout << "stack sudah penuh!" << endl;
    }

    cout << "hasil penjumlahan elemen dalam stack: " << sumStack_108072500034(S)
         << endl;

    return 0;
}