#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include "bis.h"
#include "penumpang.h"
#include "relation.h"

void menuAdmin(listBis &LB, listPenumpang &LP, listRelasi &LR);
void menuParent(listBis &LB);
void menuChild(listPenumpang &LP);
void menuUser(listBis &LB, listPenumpang &LP, listRelasi &LR);

#endif
