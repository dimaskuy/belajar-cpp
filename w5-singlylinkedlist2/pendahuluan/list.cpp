#include <iostream>
#include "list.h"
using namespace std;

void searchElement(List &L, infotype x){
    address current;
    int position;

    current = L.first;
    position = 1;
    while (current != Nil && current->info != x){
        current = current->next;
        position++;
    }
    if (current != Nil){
        cout << "Elemen " << x << " ditemukan pada alamat " << current << " pada posisi " << position << endl;
    }
    else{
        cout << "Elemen " << x << " tidak ditemukan dalam list" << endl;
    }
}

void selectionSort(List &L){
    address p, min, temp;
    infotype x;

    p = L.first;
    while (p != Nil){
        min = p;
        temp = p;

        while (temp != Nil){
            if (temp->info < min->info){
                min = temp;
            }
            temp = temp->next;
        }

        x = p->info;
        p->info = min->info;
        min->info = x;
        p = p->next;
    }
}

void insertSorted(List &L, address p) {
    address q, prev;
    bool found;

    q = L.first;
    prev = Nil;
    found = false;
    while (q != Nil && found == false) {
        if (q->info < p->info){
            prev = q;
            q = q->next;
        }
        else{
            found = true;
        }
    }
    if (prev == Nil){
        p->next = L.first;
        L.first = p;
    }
    else{
        p->next = q;
        prev->next = p;
    }
}
