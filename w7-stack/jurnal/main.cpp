#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    stack S;
    int pilihan;
    infotype nilai;

    createStack(S);

    do {
        cout << "\n===== MENU STACK =====" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Tampilkan Stack" << endl;
        cout << "4. Jumlah Elemen Genap" << endl;
        cout << "5. Balikkan Stack" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1: {
            if (!isFull(S)) {
                int i = 0;
                while (MAXSTACK - S.top > 0) {
                    cout << "Masukkan elemen " << i + 1 << " (0 = stop): ";
                    cin >> nilai;
                    if (nilai == 0) {
                        break;
                    }
                    push(S, nilai);
                    i++;
                }
                cout << "[Elemen berhasil ditambahkan]" << endl;
            } else {
                cout << "[Stack penuh, tidak bisa menambah elemen.]" << endl;
            }
            break;
        }

        case 2: {
            if (!isEmpty(S)) {
                nilai = pop(S);
                cout << "Elemen yang diambil: " << nilai << endl;
            } else {
                cout << "[Stack kosong, tidak ada elemen yang diambil]" << endl;
            }
            break;
        }

        case 3: {
            printInfo(S);
            break;
        }

        case 4: {
            if (!isEmpty(S)) {
                int totalGenap = sumEvenStack(S);
                cout << "Jumlah elemen genap dalam stack: " << totalGenap
                     << endl;
            } else {
                cout << "[Stack kosong, tidak ada elemen untuk dihitung]"
                     << endl;
            }
            break;
        }

        case 5: {
            if (!isEmpty(S)) {
                reverseStack(S);
                cout << "[Stack berhasil dibalik]" << endl;
            } else {
                cout << "[Stack kosong, tidak ada elemen untuk dibalik]"
                     << endl;
            }
            break;
        }

        case 0: {
            cout << "[Program selesai]" << endl;
            break;
        }

        default:
            cout << "[Pilihan tidak valid.]" << endl;
        }
    } while (pilihan != 0);

    return 0;
}