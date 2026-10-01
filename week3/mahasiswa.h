#ifndef MAHASISWA_H
#define MAHASISWA_H
// HEADER - DEKLARASI
struct mahasiswa {
    char NIM[10];
    int nilai1, nilai2;
};

void inputmahasiswa(mahasiswa &m);
float avg(mahasiswa m);

#endif