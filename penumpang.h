#ifndef PENUMPANG_H_INCLUDED
#define PENUMPANG_H_INCLUDED
#include <iostream>
using namespace std;

struct penumpang{
    string nama;
    string tujuan;
};
typedef penumpang infotypePenumpang;
typedef struct elmlistPenumpang *adrPenumpang;
struct elmlistPenumpang{
    infotypePenumpang info;
    adrPenumpang next;
    adrPenumpang prev;
};
struct listPenumpang{
    adrPenumpang first;
    adrPenumpang last
};

void createListPenumpang(listPenumpang &L);
adrPenumpang createElmPenumpang(infotypePenumpang x);

void insertFirstPenumpang(listPenumpang &L, adrPenumpang P);
void insertLastPenumpang(listPenumpang &L, adrPenumpang P);
void insertAfterPenumpang(listPenumpang &L, adrPenumpang Prec, adrPenumpang P);

void deleteFirstPenumpang(listPenumpang &L, adrPenumpang &P);
void deleteLastPenumpang(listPenumpang &L, adrPenumpang &P);
void deleteAfterPenumpang(listPenumpang &L, adrPenumpang Prec, adrPenumpang &P);

adrPenumpang findPenumpang(listPenumpang L, string nama);

void showPenumpang(listPenumpang L);

#endif // PENUMPANG_H_INCLUDED
