#include <iostream>
#include "main.h"

using namespace std;

void menuUser(listBis &LB, listPenumpang &LP){
    int option = -99;
    while (option != 0) {
        system("cls");
        cout << "====== Menu Studi Kasus ====== " << endl;
        cout << "|| 1. Lihat daftar bis      ||" << endl;
        cout << "|| 2. Cari bis              ||" << endl;
        cout << "|| 3. Lihat penumpang       ||" << endl;
        cout << "|| 0. back                  ||" << endl;
        cout << "============================== " << endl;
        cout << "Choose your option : ";
        cin >> option;

        if (option == 1) {
            cout << "Daftar Bis:" << endl;
            showAllBis(LB);
            system("pause");
        }
        else if (option == 2) {
            string nama;
            cout << "Masukkan nama bis: ";
            cin >> nama;

            adrBis P = findBis(LB, nama);
            if (P != nullptr) {
                cout << "Bis ditemukan!" << endl;
                cout << "Nama      : " << P->info.namaBis << endl;
                cout << "Rute      : " << P->info.rute << endl;
                cout << "Kapasitas : " << P->info.kapasitas << endl;
            } else {
                cout << "Bis tidak ditemukan." << endl;
            }
            system("pause");
        }
        else if (option == 3) {
            cout << "Daftar Penumpang:" << endl;
            showPenumpang(LP);
            system("pause");
        }
    }
}
