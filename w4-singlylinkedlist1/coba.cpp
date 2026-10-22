#include <iostream>
using namespace std;

#define Nil NULL

// 1. DEFINISI TIPE DATA

typedef int infotype;

struct elmlist {
    infotype info;
    elmlist* next;
};

typedef elmlist* address;

struct list {
    address first;
};


// 2. CREATE LIST

void createList(list &L) {
    L.first = Nil;
}


// 3. CEK LIST KOSONG

bool listEmpty(list L) {
    return L.first == Nil;
}


// 4. ALOKASI NODE BARU

address alokasi(infotype x) {
    address P = new elmlist;

    P->info = x;
    P->next = Nil;

    return P;
}


// 5. DEALOKASI NODE

void dealokasi(address P) {
    delete P;
}


// 6. INSERT FIRST

void insertFirst(list &L, address P) {
    P->next = L.first;
    L.first = P;
}


// 7. INSERT LAST

void insertLast(list &L, address P) {
    if (L.first == Nil) {
        L.first = P;
    }
    else {
        address Q = L.first;

        while (Q->next != Nil) {
            Q = Q->next;
        }

        Q->next = P;
    }

    P->next = Nil;
}


// 8. INSERT AFTER

void insertAfter(list &L, address P, address Prec) {
    P->next = Prec->next;
    Prec->next = P;
}


// 9. PRINT / VIEW

void printInfo(list L) {
    address P = L.first;

    while (P != Nil)
    {
        cout << P->info << " ";

        P = P->next;
    }

    cout << endl;
}


// 10. JUMLAH NODE

int nbList(list L) {
    int jumlah = 0;

    address P = L.first;

    while (P != Nil)
    {
        jumlah++;

        P = P->next;
    }

    return jumlah;
}


// 11. DELETE FIRST

void deleteFirst(list &L, address &P) {
    P = L.first;

    L.first = L.first->next;

    P->next = Nil;
}


// 12. DELETE LAST

void deleteLast(list &L, address &P) {
    address Q = L.first;

    if (Q->next == Nil) {
        P = Q;
        L.first = Nil;
    }
    else {
        while (Q->next->next != Nil) {
            Q = Q->next;
        }

        P = Q->next;
        Q->next = Nil;
    }
}


// 13. DELETE AFTER

void deleteAfter(list &L, address &P, address Prec) {
    P = Prec->next;

    Prec->next = P->next;

    P->next = Nil;
}


// 14. UPDATE

void update(list &L, int posisi, infotype nilaiBaru) {
    address P = L.first;

    int i = 1;

    while (P != Nil && i < posisi)
    {
        P = P->next;
        i++;
    }

    if (P != Nil)
    {
        P->info = nilaiBaru;
    }
}


// MAIN PROGRAM

int main() {
    list L;

    // Membuat list kosong
    createList(L);


    // INSERT FIRST

    address P1 = alokasi(10);
    insertFirst(L, P1);

    address P2 = alokasi(20);
    insertFirst(L, P2);

    address P3 = alokasi(30);
    insertFirst(L, P3);

    cout << "Setelah Insert First : ";
    printInfo(L);


    // INSERT LAST

    address P4 = alokasi(40);
    insertLast(L, P4);

    cout << "Setelah Insert Last  : ";
    printInfo(L);


    // INSERT AFTER

    address P5 = alokasi(25);

    // P2 adalah node yang berisi 20
    insertAfter(L, P5, P2);

    cout << "Setelah Insert After : ";
    printInfo(L);


    // JUMLAH NODE

    cout << "Jumlah Node          : "
         << nbList(L)
         << endl;


    // UPDATE

    update(L, 3, 100);

    cout << "Setelah Update       : ";
    printInfo(L);


    // DELETE FIRST

    address P;

    deleteFirst(L, P);

    cout << "Setelah Delete First : ";
    printInfo(L);

    dealokasi(P);


    // DELETE LAST

    deleteLast(L, P);

    cout << "Setelah Delete Last  : ";
    printInfo(L);

    dealokasi(P);


    // DELETE AFTER

    // Misalnya hapus node setelah node pertama
    address Prec = L.first;

    deleteAfter(L, P, Prec);

    cout << "Setelah Delete After : ";
    printInfo(L);

    dealokasi(P);


    return 0;
}