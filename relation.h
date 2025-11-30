#ifndef RELATION_H_INCLUDED
#define RELATION_H_INCLUDED
#include "bis.h"
#include "penumpang.h"

typedef struct elmListRelasi *adrRelasi;
struct elmRelasi{
    adrBis parent;
    adrPenumpang child;
    adrRelasi next;
    adrRelasi prev;
};
struct listRelasi{
    adrRelasi first;
    adrRelasi last;
};
void createListRelasi(listRelasi &L);
adrRelasi createElmRelasi(adrBis P, adrPenumpang C);

void insertFirstRelasi(listRelasi &L, adrRelasi R);
void insertLastRelasi(listRelasi &L, adrRelasi R);
void insertAfterRelasi(listRelasi &L, adrRelasi Prec, adrRelasi R);

void deleteFirstRelasi(listRelasi &L, adrRelasi &R);
void deleteLastRelasi(listRelasi &L, adrRelasi &R);
void deleteAfterRelasi(listRelasi &L, adrRelasi Prec, adrRelasi &R);

void showChildOfParent(listRelasi L, adrBis P);
void showParentOfChild(listRelasi L, adrPenumpang C);

adrRelasi findRelasiByParent(listRelasi L, adrBis P);
adrRelasi findRelasiByChild(listRelasi L, adrPenumpang C);
void showAllRelasi(listRelasi L);

int countChildOfParent(listRelasi L, adrBis P);
int countParentOfChild(listRelasi L, adrPenumpang C);
int countParentWithoutChild(listRelasi L, listBis LB);
int countChildWithoutParent(listRelasi L, listPenumpang LP);
#endif // RELATION_H_INCLUDED
