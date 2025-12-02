#include "relation.h"
#include <iostream>
using namespace std;

void createListRelasi(listRelasi &L){
    L.first = NULL;
    L.last = NULL;
}
adrRelasi createElmRelasi(adrBis P, adrPenumpang C){
    adrRelasi R = new elmRelasi;
    R->parent = P;
    R->child = C;
    R->next = NULL;
    R->prev = NULL;
    return R;
}

void insertFirstRelasi(listRelasi &L, adrRelasi R){
    if(L.first == NULL){
        L.first = R;
        L.last = R;
    } else {
        R->next = L.first;
        L.first->prev = R;
        L.first = R;
    }
}

void insertLastRelasi(listRelasi &L, adrRelasi R){
    if(L.first == NULL){
        L.first = R;
        L.last = R;
    } else {
        L.last->next = R;
        R->prev = L.last;
        L.last = R;
    }
}

void insertAfterRelasi(listRelasi &L, adrRelasi Prec, adrRelasi R){
    if(Prec != NULL){
        R->next = Prec->next;
        R->prev = Prec;

        if(Prec->next != NULL){
            Prec->next->prev = R;
        } else {
            L.last = R;
        }

        Prec->next = R;
    }
}

void deleteFirstRelasi(listRelasi &L, adrRelasi &R){
    R = L.first;
    if(R != NULL){
        if(L.first == L.last){
            L.first = NULL;
            L.last = NULL;
        } else {
            L.first = R->next;
            L.first->prev = NULL;
        }
        R->next = NULL;
        R->prev = NULL;
    }
}

void deleteLastRelasi(listRelasi &L, adrRelasi &R){
    R = L.last;
    if(R != NULL){
        if(L.first == L.last){
            L.first = NULL;
            L.last = NULL;
        } else {
            L.last = R->prev;
            L.last->next = NULL;
        }
        R->next = NULL;
        R->prev = NULL;
    }
}

void deleteAfterRelasi(listRelasi &L, adrRelasi Prec, adrRelasi &R){
    if(Prec != NULL){
        R = Prec->next;
        if(R != NULL){
            Prec->next = R->next;

            if(R->next != NULL){
                R->next->prev = Prec;
            } else {
                L.last = Prec;
            }

            R->next = NULL;
            R->prev = NULL;
        }
    }
}

adrRelasi findRelasiByParent(listRelasi L, adrBis P){
    adrRelasi R = L.first;
    while(R != NULL){
        if(R->parent == P){
            return R;
        }
        R = R->next;
    }
    return NULL;
}

adrRelasi findRelasiByChild(listRelasi L, adrPenumpang C){
    adrRelasi R = L.first;
    while(R != NULL){
        if(R->child == C){
            return R;
        }
        R = R->next;
    }
    return NULL;
}

void showChildOfParent(listRelasi L, adrBis P){
    adrRelasi R = L.first;
    cout << "Penumpang dari Bis " << P->info.namaBis << ":\n";
    while(R != NULL){
        if(R->parent == P){
            cout << "- " << R->child->info.nama << " (Tujuan: " << R->child->info.tujuan << ")\n";
        }
        R = R->next;
    }
}

void showParentOfChild(listRelasi L, adrPenumpang C){
    adrRelasi R = L.first;
    cout << "Bis yang dinaiki " << C->info.nama << ":\n";
    while(R != NULL){
        if(R->child == C){
            cout << "- " << R->parent->info.namaBis << "\n";
        }
        R = R->next;
    }
}

void showAllRelasi(listRelasi L){
    adrRelasi R = L.first;
    while(R != NULL){
        cout << "[Bis: " << R->parent->info.namaBis
             << " -> Penumpang: " << R->child->info.nama << "]\n";
        R = R->next;
    }
}

int countChildOfParent(listRelasi L, adrBis P){
    adrRelasi R = L.first;
    int count = 0;
    while(R != NULL){
        if(R->parent == P){
            count = count + 1;
        }
        R = R->next;
    }
    return count;
}

int countParentOfChild(listRelasi L, adrPenumpang C){
    adrRelasi R = L.first;
    int count = 0;
    while(R != NULL){
        if(R->child == C){
            count = count + 1;
        }
        R = R->next;
    }
    return count;
}

int countParentWithoutChild(listRelasi L, listBis LB){
    adrBis P = LB.first;
    int count = 0;

    while(P != NULL){
        int ada = 0;
        adrRelasi R = L.first;

        while(R != NULL){
            if(R->parent == P){
                ada = 1;
            }
            R = R->next;
        }

        if(ada == 0){
            count = count + 1;
        }

        P = P->next;
    }

    return count;
}

int countChildWithoutParent(listRelasi L, listPenumpang LP){
    adrPenumpang C = LP.first;
    int count = 0;

    while(C != NULL){
        int ada = 0;
        adrRelasi R = L.first;

        while(R != NULL){
            if(R->child == C){
                ada = 1;
            }
            R = R->next;
        }

        if(ada == 0){
            count = count + 1;
        }

        C = C->next;
    }

    return count;
}
