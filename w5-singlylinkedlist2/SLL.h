#ifndef SLL_H
#define SLL_H

#include <iostream>

#define Nil NULL

typedef bool boolean;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;

    address next;
};

struct List {
    address first;
};

void createList(List &L);
boolean isEmpty(List L);
address allocate(infotype X);

void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void insertAfter(List &L, address Prec, address P);

void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);

void selectionSort(List &L);
void addNewElementList(List &L, int n);
void printInfo(List L);

#endif