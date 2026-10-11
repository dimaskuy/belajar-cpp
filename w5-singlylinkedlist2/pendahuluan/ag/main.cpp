#include <iostream>
using namespace std;

// ADT
typedef int infotype;

struct elmlist {
    infotype info;
    elmlist *next;
};

typedef struct elmlist *address;

struct List {
    address first;
};

void searchElement(List &L, infotype x) {
    address current = L.first;
    int position = 1;

    while (current != nullptr && current->info != x) {
        position++;
        current = current->next;
    }

    if (current != nullptr) {
        cout << "Elemen " << x << " ditemukan pada posisi " << position
             << " dengan alamat " << current << ".\n";
    } else {
        cout << "Elemen tersebut tidak ada dalam list.\n";
    }
}

void selectionSort(List &L) {
    address p = L.first;

    while (p != nullptr) {
        address min = p;
        address temp = p->next;

        while (temp != nullptr) {
            if (temp->info < min->info) {
                min = temp;
            }
            temp = temp->next;
        }

        infotype x = p->info;
        p->info = min->info;
        min->info = x;

        p = p->next;
    }
}

void insertSorted(List &L, address p) {
    if (p == nullptr) {
        return;
    }
    p->next = nullptr;
    address q = L.first;
    address prev = nullptr;
    bool found = false;
    while (q != nullptr && !found) {
        if (q->info < p->info) {
            prev = q;
            q = q->next;
        } else {
            found = true;
        }
    }

    if (prev == nullptr) {
        p->next = L.first;
        L.first = p;
    } else {
        p->next = q;
        prev->next = p;
    }
}
