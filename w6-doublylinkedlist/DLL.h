#ifndef DLL_H
#define DLL_H
#include <iostream>

typedef int infotype;
typedef struct elmlist *address;

typedef struct elmlist {
    infotype info;
    address next;
    address prev;
} elmlist;

typedef struct List {
    address first;
    address last;
} List;

void createList(List &L);
bool isEmpty(List L);
address allocate(infotype x);
void insertFirst(List &L, address p);
void insertLast(List &L, address p);
void insertAfter(List &L, address prec, address p);
void deleteFirst(List &L, address &p);
void deleteLast(List &L, address &p);
void deleteAfter(List &L, address prec, address &p);
void deleteBefore(List &L, address succ, address &p);
void printInfo(List L);
void deleteByValue(List &L, infotype x);
void reverseList(List &L);

#endif