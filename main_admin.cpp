#include "main.h"
#include <iostream>
using namespace std;

void menuAdmin(listBis &LB, listPenumpang &LP, listRelasi &LR){
    int opt;
    do{
        system("cls");
        cout << "MENU ADMIN\n";
        cout << "1. Kelola Bis\n";
        cout << "2. Kelola Penumpang\n";
        cout << "0. Back\n";
        cin >> opt;

        if(opt == 1){
            menuParent(LB);
        }
        else if(opt == 2){
            menuChild(LP);
        }
    }while(opt != 0);
}

void menuParent(listBis &LB){
    int opt;
    Bis x;
    adrBis P;

    do{
        system("cls");
        cout << "MENU BIS\n";
        cout << "1. Insert Bis\n";
        cout << "2. Show Bis\n";
        cout << "0. Back\n";
        cin >> opt;

        if(opt == 1){
            cin.ignore();
            cout << "Nama Bis : "; getline(cin, x.namaBis);
            cout << "Rute     : "; getline(cin, x.rute);
            cout << "Kapasitas: "; cin >> x.kapasitas;

            P = createElement(x);
            insertLast(LB, P);
        }
        else if(opt == 2){
            showAllBis(LB);
            system("pause");
        }

    }while(opt != 0);
}

void menuChild(listPenumpang &LP){
    int opt;
    infotypePenumpang x;
    adrPenumpang P;

    do{
        system("cls");
        cout << "MENU PENUMPANG\n";
        cout << "1. Insert Penumpang\n";
        cout << "2. Show Penumpang\n";
        cout << "0. Back\n";
        cin >> opt;

        if(opt == 1){
            cin.ignore();
            cout << "Nama   : "; getline(cin, x.nama);
            cout << "Tujuan : "; getline(cin, x.tujuan);

            P = createElmPenumpang(x);
            insertLastPenumpang(LP, P);
        }
        else if(opt == 2){
            showPenumpang(LP);
            system("pause");
        }

    }while(opt != 0);
}
