#include "SLL.h"
#include <iostream>

using namespace std;

void createList(List &L) { L.first = Nil; }

boolean isEmpty(List L) { return L.first == Nil; }

address allocate(infotype x) {
    address P = new elmlist;
    if (P != Nil) {
        P->info = x;
        P->next = Nil;
    }
    return P;
}

void insertFirst(List &L, address P) {
    if (P != Nil) {
        P->next = L.first;
        L.first = P;
    }
}

void insertLast(List &L, address P) {
    if (P == Nil)
        return;

    if (isEmpty(L)) {
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != Nil) {
            Q = Q->next;
        }
        Q->next = P;
    }
    P->next = Nil;
}

void insertAfter(List &L, address Prec, address P) {
    if (Prec != Nil && P != Nil) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void deleteFirst(List &L, address &P) {
    if (isEmpty(L)) {
        P = Nil;
    } else {
        P = L.first;
        L.first = L.first->next;
        P->next = Nil;
    }
}

void deleteLast(List &L, address &P) {
    if (isEmpty(L)) {
        P = Nil;
    } else {
        address Q = L.first;
        if (Q->next == Nil) {
            P = Q;
            L.first = Nil;
        } else {
            while (Q->next->next != Nil) {
                Q = Q->next;
            }
            P = Q->next;
            Q->next = Nil;
        }
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    if (Prec != Nil && Prec->next != Nil) {
        P = Prec->next;
        Prec->next = P->next;
        P->next = Nil;
    } else {
        P = Nil;
    }
}

void printInfo(List L) {
    if (isEmpty(L)) {
        cout << "Daftar produk kosong" << endl;
    } else {
        address P = L.first;
        while (P != Nil) {
            cout << P->info;
            if (P->next != Nil) {
                cout << ", ";
            }
            P = P->next;
        }
        cout << endl;
    }
}

void selectionSort(List &L) {
    if (L.first == Nil)
        return;

    address p, min, temp;
    infotype x;

    p = L.first;
    while (p != Nil) {
        min = p;
        temp = p->next;
        while (temp != Nil) {
            if (temp->info < min->info) {
                min = temp;
            }
            temp = temp->next;
        }

        if (min != p) {
            x = p->info;
            p->info = min->info;
            min->info = x;
        }

        p = p->next;
    }
}

void addNewElementList(List &L, int n) {
    infotype x;
    address P;
    for (int i = 1; i <= n; i++) {
        cout << "--masukkan data ke-" << i << ": ";
        cin >> x;
        P = allocate(x);
        insertLast(L, P);
    }
}