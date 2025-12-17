#ifndef BIS_H_INCLUDED
#define BIS_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

struct Bis{
    string namaBis;
    string rute;
    int kapasitas;
};
typedef struct elmBis *adrBis;
struct elmBis{
    Bis info;
    adrBis next;
};
struct listBis{
    adrBis first;
};

void createList(listBis &L);
adrBis createElement(Bis x);
void insertFirst(listBis &L, adrBis P);
void insertLast(listBis &L, adrBis P);
void insertAfter(listBis &L, adrBis prec, adrBis P);
void deleteFirst(listBis &L, adrBis &P);
void deleteLast(listBis &L, adrBis &P);
void deleteAfter(listBis &L, adrBis prec, adrBis &P);
adrBis findBis(listBis L, string cariNama);
void showAllBis(listBis L);


#endif // BIS_H_INCLUDED
