#include <iostream>
#include "bis.h"

using namespace std;

void deleteFirst(listBis &L, adrBis &P){
    if (L.first == nullptr) {
        P = nullptr;
    } else {
        P = L.first;
        L.first = P->next;
        P->next = nullptr;
    }
}

void deleteLast(listBis &L, adrBis &P){
    if (L.first == nullptr) {
        P = nullptr;
    } else if (L.first->next == nullptr){
        P = L.first;
        L.first = nullptr;
    } else {
        adrBis Q = L.first;
        while (Q->next->next != nullptr){
            Q = Q->next;
        }
        P = Q->next;
        Q->next = nullptr;
    }
}

void deleteAfter(listBis &L, adrBis prec, adrBis &P){
    if (prec == nullptr || prec->next == nullptr) {
        P = nullptr;
    } else {
        P = prec->next;
        prec->next = P->next;
        P->next = nullptr;
    }
}

address findBis(listBis L, string cariNama){
    adrBis P = L.first;
    while (P != nullptr) {
        if (P->info.namaBis == cariNama){
            return P;
        }
        P = P->next;
    }
    return nullptr;
}

address showAllBis(listBis L){
    adrBis P = L.first;
    while (P != nullptr) {
        cout << "Nama Bus : " << P->info.namaBis << endl;
        cout << "Rute     : " << P->info.rute << endl;
        cout << "Kapasitas: " << P->info.kapasitas << endl;
        cout << "------------------------" << endl;
        P = P->next;
    }
}

