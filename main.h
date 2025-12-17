#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include "bis.h"
#include "penumpang.h"

using namespace std;

void menuAdmin(listBis &LB, listPenumpang &LP);
void menuUser(listBis &LB, listPenumpang &LP);

void menuParent(listBis &LB);
void menuChild(listPenumpang &LP);
#endif // MAIN_H_INCLUDED

