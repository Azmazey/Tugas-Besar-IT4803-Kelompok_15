#ifndef BIS_H_INCLUDED
#define BIS_H_INCLUDED

using namespace std;

struct Bis{
    string namaBis;
    string rute;
    int kapasitas;
};

typedef struct elmBis *address;

struct elmBis{
    Bis info;
    address next;
};

struct listBis{
    address first;
};

void createList(listBis &L);
address createElement(Bis data);
void insertFirst(listBis &L, address P);
void insertLast(listBis &L, address P);
void insertAfter(listBis &L, address prec, address P);
void deleteFirst(listBis &L, address &P);
void deleteLast(listBis &L, address &P);
void deleteAfter(listBis &L, address prec, address &P);
address findBis(listBis L, string cariNama);
void showAllBis(listBis L);

tes

#endif // BIS_H_INCLUDED
