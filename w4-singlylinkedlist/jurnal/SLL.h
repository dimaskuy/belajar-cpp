#ifndef SLL_H
#define SLL_H

#include <iostream>
#include <string>

#define Nil NULL

using std::string;

typedef string infotype;

struct elmlist {
    infotype info;
    elmlist* next;
};

typedef elmlist* address;

struct list {
    address first;
};

void createList(list &L);
bool isEmpty(list L);
address allocate(infotype x);
void insertFirst(list &L, address P);
void insertLast(list &L, address P);
void insertAfter(list &L, address P, address Prec);
void deleteFirst(list &L, address &P);
void deleteLast(list &L, address &P);
void deleteAfter(list &L, address &P, address Prec);
void printInfo(list L);
address findInfo(list L, infotype x);

#endif