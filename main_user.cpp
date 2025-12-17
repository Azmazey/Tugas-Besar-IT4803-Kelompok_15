#include "main.h"
#include <iostream>
using namespace std;

void menuUser(listBis &LB, listPenumpang &LP, listRelasi &LR){
    int opt;
    do{
        system("cls");
        cout << "MENU USER\n";
        cout << "1. Lihat Bis\n";
        cout << "2. Lihat Penumpang\n";
        cout << "3. Lihat Relasi\n";
        cout << "0. Back\n";
        cin >> opt;

        if(opt == 1){
            showAllBis(LB);
            system("pause");
        }
        else if(opt == 2){
            showPenumpang(LP);
            system("pause");
        }
        else if(opt == 3){
            showAllRelasi(LR);
            system("pause");
        }

    }while(opt != 0);
}
