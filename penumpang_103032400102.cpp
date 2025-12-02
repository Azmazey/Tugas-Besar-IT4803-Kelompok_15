#include <iostream>
#include "penumpang.h"

using namespace std;

#include "penumpang.h"

void createListPenumpang(listPenumpang &L){
    L.first = nullptr;
    L.last = nullptr;
}

adrPenumpang createElmPenumpang(DataPenumpang data){
    adrPenumpang P = new elmPenumpang;
    P->info = data;
    P->next = nullptr;
    P->prev = nullptr;
    return P;
}

void insertFirstPenumpang(listPenumpang &L, adrPenumpang P){
    if (L.first == nullptr){
        L.first = P;
        L.last = P;
    }else{
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertLastPenumpang(listPenumpang &L, adrPenumpang P){
    if (L.first == nullptr){
        L.first = P;
        L.last = P;
    }else{
        L.last->next = P;
        P->prev = L.last;
        L.last = P;
    }
}

void insertAfterPenumpang(listPenumpang &L, adrPenumpang Prec, adrPenumpang P){
    if (Prec != nullptr){
        P->next = Prec->next;
        P->prev = Prec;
        if (Prec->next != nullptr){
            Prec->next->prev = P;
        } else {
            L.last = P;
        }
        Prec->next = P;
    }
}

