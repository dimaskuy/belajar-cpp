#include "DLL.h"
#include <iostream>
using namespace std;

void createList_108072500034(List &L) {
    L.first = nullptr;
    L.last = nullptr;
}

bool isEmpty_108072500034(List L) {
    return (L.first == nullptr && L.last == nullptr);
}

address allocate_108072500034(infotype x) {
    address P = new elmlist;
    if (P != nullptr) {
        P->info = x;
        P->next = nullptr;
        P->prev = nullptr;
    }
    return P;
}

void insertFirst_108072500034(List &L, address p) {
    if (isEmpty_108072500034(L)) {
        L.first = p;
        L.last = p;
    } else {
        p->next = L.first;
        L.first->prev = p;
        L.first = p;
    }
}

void insertLast_108072500034(List &L, address p) {
    if (isEmpty_108072500034(L)) {
        L.first = p;
        L.last = p;
    } else {
        p->prev = L.last;
        L.last->next = p;
        L.last = p;
    }
}

void deleteLast_108072500034(List &L, address &p) {
    if (!isEmpty_108072500034(L)) {
        p = L.last;
        if (L.first == L.last) {
            L.first = nullptr;
            L.last = nullptr;
        } else {
            L.last = p->prev;
            L.last->next = nullptr;
        }
        p->prev = nullptr;
        p->next = nullptr;
    } else {
        p = nullptr;
    }
}

void printInfo_108072500034(List L) {
    if (isEmpty_108072500034(L)) {
        cout << "List is empty." << endl;
    } else {
        address P = L.first;
        while (P != nullptr) {
            cout << P->info << " ";
            P = P->next;
        }
        cout << endl;
    }
}

void printInfoFrontToBack_108072500034(List L) {
    if (isEmpty_108072500034(L)) {
        cout << "Empty list" << endl;
    } else {
        address P = L.first;
        while (P != nullptr) {
            cout << P->info << ", ";
            P = P->next;
        }
        cout << endl;
    }
}

void printInfoFrontToFront_108072500034(List L) {
    if (isEmpty_108072500034(L)) {
        cout << "Empty list" << endl;
    } else {
        address P = L.last;
        while (P != nullptr) {
            cout << P->info << ", ";
            P = P->prev;
        }
        cout << endl;
    }
}