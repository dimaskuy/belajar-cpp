#include <iostream>
using namespace std;

#define NIL NULL

typedef int infotype;
typedef struct elmStack *address;
struct elmStack {
    infotype info;
    address next;
};

struct stack {
    address top;
};

// Membuat stack kosong
void createStack(stack &s) { s.top = NIL; }

// Mengecek apakah stack kosong
bool isEmpty(stack s) { return (s.top == NIL); }

// Alokasi memori untuk elemen stack baru
address allocation(infotype x) {
    address p = new elmStack;
    if (p != NIL) {
        p->info = x;
        p->next = NIL;
    }
    return p;
}

// Dealokasi memori untuk elemen stack
void deallocation(address &p) {
    delete p;
    p = NIL;
}

// Menambahkan elemen ke stack
address push(stack &s, address &p) {
    if (p != NIL) {
        p->next = s.top;
        s.top = p;
    }
    return p;
}

address pop(stack &s, address &p) {
    if (isEmpty(s)) {
        p = NIL;
        return NIL;
    } else {
        p = s.top;
        s.top = s.top->next;
        p->next = NIL;
    }
    return p;
}

void printInfo(stack s) {
    if (isEmpty(s)) {
        cout << "Stack kosong!" << endl;
        return;
    }

    address p = s.top;
    cout << "Top -> ";
    while (p != NIL) {
        cout << p->info << " -> ";
        p = p->next;
    }

    cout << "NIL" << endl;
}

void deleteAll(stack &s) {
    address p;
    while (!isEmpty(s)) {
        pop(s, p);
        deallocation(p);
    }
}

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
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1: {
            cout << "Masukkan nilai: ";
            cin >> nilai;

            address P = allocation(nilai);

            if (P != NIL) {
                push(S, P);
                cout << "Elemen berhasil ditambahkan." << endl;
            } else {
                cout << "Alokasi memori gagal." << endl;
            }

            break;
        }

        case 2: {
            address P;
            pop(S, P);

            if (P != NIL) {
                cout << "Elemen yang diambil: " << P->info << endl;

                deallocation(P);
            } else {
                cout << "Stack kosong, tidak ada elemen yang diambil." << endl;
            }

            break;
        }

        case 3:
            printInfo(S);
            break;

        case 0:
            cout << "Program selesai." << endl;
            break;

        default:
            cout << "Pilihan tidak valid." << endl;
        }

    } while (pilihan != 0);

    deleteAll(S);

    return 0;
}