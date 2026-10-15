#ifndef DLL_H
#define DLL_H
#include <iostream>

typedef int infotype;
typedef struct elmlist *address;

typedef struct elmlist {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};

void createList_108072500034(List &L);
bool isEmpty_108072500034(List L);
address allocate_108072500034(infotype x);
void printInfo_108072500034(List L);

void insertFirst_108072500034(List &L, address p);
void insertLast_108072500034(List &L, address p);
void deleteFirst_108072500034(List &L, address &p);
void deleteLast_108072500034(List &L, address &p);

void printInfoFrontToBack_108072500034(List L);
void printInfoFrontToFront_108072500034(List L);
#endif