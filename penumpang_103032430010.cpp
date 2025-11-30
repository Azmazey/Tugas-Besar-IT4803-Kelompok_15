#include "penumpang.h"
#include <iostream>
using namespace std;

void deleteFirstPenumpang(listPenumpang &L, adrPenumpang &P) {
    if (L.first == nullptr) {
        P = nullptr;
    } else if (L.first == L.last) {
        P = L.first;
        L.first = nullptr;
        L.last = nullptr;
    } else {
        P = L.first;
        L.first = P->next;
        L.first->prev = nullptr;
        P->next = nullptr;
    }
}
void deleteLastPenumpang(listPenumpang &L, adrPenumpang &P) {
    if (L.first == nullptr) {
        P = nullptr;
    } else if (L.first == L.last) {
        P = L.first;
        L.first = nullptr;
        L.last = nullptr;
    } else {
        P = L.last;
        L.last = P->prev;
        L.last->next = nullptr;
        P->prev = nullptr;
    }
}
void deleteAfterPenumpang(listPenumpang &L, adrPenumpang Prec, adrPenumpang &P) {
    if (Prec == nullptr || Prec->next == nullptr) {
        P = nullptr;
        return;
    }

    P = Prec->next;
    adrPenumpang Q = P->next;

    Prec->next = Q;

    if (Q != nullptr) {
        Q->prev = Prec;
    } else {
        L.last = Prec;
    }

    P->next = nullptr;
    P->prev = nullptr;
}
adrPenumpang findPenumpang(listPenumpang L, string nik) {
    adrPenumpang P = L.first;
    while (P != nullptr) {
        if (P->info.nik == nik) return P;
        P = P->next;
    }
    return nullptr;
}
void showAllPenumpang(listPenumpang L) {
    adrPenumpang P = L.first;
    if (P == nullptr) {
        cout << "Tidak ada data penumpang.\n";
        return;
    }

    while (P != nullptr) {
        cout << "Nama: " << P->info.nama << endl;
        cout << "Umur: " << P->info.umur << endl;
        cout << "--------------------------\n";
        P = P->next;
    }
}
