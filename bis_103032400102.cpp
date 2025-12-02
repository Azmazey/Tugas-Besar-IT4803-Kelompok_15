#include <iostream>
#include "bis.h"

using namespace std;

void deleteFirst(List &L, address &p){
    if (L.first == nullptr) {
        p = nullptr;
    } else {
        p = L.first;
        L.first = p->next;
        p->next = nullptr;
    }
}

void deleteLast(List &L, address &p){
    if (L.first == nullptr) {
        p = nullptr;
    } else if (L.first->next == nullptr){
        p = L.first;
        L.first = nullptr;
    } else {
        address Q = L.first;
        while (Q->next->next != nullptr){
            Q = Q->next;
        }
        P = Q->next;
        Q->next = nullptr;
    }
}

void deleteAfter(List &L, address prec, address &p){
    if (prec == nullptr || prec->next == nullptr) {
        p = nullptr;
    } else {
        p = prec->next;
        prec->next = p->next;
        p->next = nullptr;
    }
}

address findBus(List L, string namaBus){
    address p = L.first;
    while (p != nullptr) {
        if (p->info.namaBus == namaBus){
            return P;
        }
        p = p->next;
    }
    return nullptr;
}

address showAll(List L){
    address P = L.first;
    while (P != nullptr) {
        cout << "Nama Bus : " << P->info.namaBus << endl;
        cout << "Rute     : " << P->info.rute << endl;
        cout << "Kapasitas: " << P->info.kapasitas << endl;
        cout << "------------------------" << endl;
        P = P->next;
    }
}

