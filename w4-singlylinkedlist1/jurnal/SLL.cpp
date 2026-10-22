#include <iostream>
#include "SLL.h"
using namespace std;

void createList(list &L) {
    L.first = Nil;
}

bool isEmpty(list L) {
    return L.first == Nil;
}

address allocate(infotype x) {
    address P = new elmlist;
    P->info = x;
    P->next = Nil;
    return P;
}

void insertFirst(list &L, address P) {
    if (P != Nil) {
        P->next = L.first;
        L.first = P;
    }
}

void insertLast(list &L, address P) {
    if (P == Nil) return;

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

void insertAfter(list &L, address P, address Prec) {
    if (Prec != Nil && P != Nil) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void deleteFirst(list &L, address &P) {
    if (isEmpty(L)) {
        P = Nil;
    } else {
        P = L.first;
        L.first = L.first->next;
        P->next = Nil;
    }
}

void deleteLast(list &L, address &P) {
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

void deleteAfter(list &L, address &P, address Prec) {
    if (Prec != Nil && Prec->next != Nil) {
        P = Prec->next;
        Prec->next = P->next;
        P->next = Nil;
    } else {
        P = Nil;
    }
}

void printInfo(list L) {
    if (isEmpty(L)) {
        cout << "Daftar produk kosong" << endl;
    } else {
        address P = L.first;
        while (P != Nil) {
            cout << P->info << " ";
            P = P->next;
        }
        cout << endl;
    }
}

address findInfo(list L, infotype x) {
    address P = L.first;
    while (P != Nil && P->info != x) {
        P = P->next;
    }
    return P;
}