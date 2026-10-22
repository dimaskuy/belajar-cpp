#include "DLL.h"
#include <iostream>
using namespace std;

void createList(List &L) {
    L.first = nullptr;
    L.last = nullptr;
}

bool isEmpty(List L) { return (L.first == nullptr && L.last == nullptr); }

address allocate(infotype x) {
    address P = new elmlist;
    if (P != nullptr) {
        P->info = x;
        P->next = nullptr;
        P->prev = nullptr;
    }
    return P;
}

void insertFirst(List &L, address p) {
    if (isEmpty(L)) {
        L.first = p;
        L.last = p;
    } else {
        p->next = L.first;
        L.first->prev = p;
        L.first = p;
    }
}

void insertLast(List &L, address p) {
    if (isEmpty(L)) {
        L.first = p;
        L.last = p;
    } else {
        p->prev = L.last;
        L.last->next = p;
        L.last = p;
    }
}

void insertAfter(List &L, address prec, address p) {
    p->next = prec->next;
    prec->next = p;
    p->prev = prec;

    if (p->next != nullptr) {
        p->next->prev = p;
    }
}

void deleteFirst(List &L, address &p) {
    if (!isEmpty(L)) {
        p = L.first;
        if (L.first == L.last) {
            L.first = nullptr;
            L.last = nullptr;
        } else {
            L.first = p->next;
            L.first->prev = nullptr;
        }
        p->next = nullptr;
        p->prev = nullptr;
    } else {
        p = nullptr;
    }
}

void deleteLast(List &L, address &p) {
    if (!isEmpty(L)) {
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

void deleteAfter(List &L, address prec, address &p) {
    p = prec->next;
    prec->next = p->next;
    if (p->next != nullptr) {
        p->next->prev = prec;
    }
    p->next = nullptr;
    p->prev = nullptr;
}

void deleteBefore(List &L, address succ, address &p) {
    p = succ->prev;
    succ->prev = p->prev;
    if (p->prev != nullptr) {
        p->prev->next = succ;
    }
    p->next = nullptr;
    p->prev = nullptr;
}

void printInfo(List L) {
    address P = L.first;
    while (P != nullptr) {
        cout << P->info;
        if (P->next != nullptr) {
            cout << ", ";
        }
        P = P->next;
    }
    cout << endl;
}

void deleteByValue(List &L, infotype x) {
    address P = L.first;
    while (P != nullptr) {
        if (P->info == x) {
            address toDelete = P;
            if (P == L.first) {
                deleteFirst(L, toDelete);
            } else if (P == L.last) {
                deleteLast(L, toDelete);
            } else {
                deleteAfter(L, P->prev, toDelete);
            }
            delete toDelete;
            break;
        }
        P = P->next;
    }
}

void reverseList(List &L) {
    address current = L.first;
    address temp = nullptr;
    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != nullptr) {
        L.last = L.first;
        L.first = temp->prev;
    }
}