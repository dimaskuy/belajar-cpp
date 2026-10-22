// NOTE: No "main.cpp" file for testing.
#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
using namespace std;
#define Nil NULL

typedef int infotype;
typedef struct ElmtList *address;

struct ElmtList {
    infotype info;
    address next;
};

struct List {
    address first;
};

void searchElement(List &L, infotype x);
void selectionSort(List &L);
void insertSorted(List &L, address p);
#endif