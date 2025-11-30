#include "bis.h"
#include <iostream>
using namespace std;
cout<<"cek";
void createList(List &L){
    L.first = nullptr;
}
address createElement(infotype x){
    adrress P = new elmBis;
    P->info = x;
    P->next = NULL;
    return P;
}
void insertFirst(List &L, address p){
    if (L.first == NULL) {
        L.first = P;
    } else {
        P->next = L.first;
        L.first = P;
    }
}
void insertLast(List &L, address p){
    if (L.first == nullptr) {
        L.first = P;
    } else {
        adrress Q = L.first;
        while (Q->next != nullptr) {
            Q = Q->next;
        }
        Q->next = P;
    }
}
void insertAfter(List &L, address prec, address p){
    if (Prec != nullptr) {
        P->next = Prec->next;
        Prec->next = P;
    }
}
