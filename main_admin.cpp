#include <iostream>
#include "main.h"

using namespace std;

void menuAdmin(listBis &LB, listPenumpang &LP){
    int option = -99;
    while (option != 0) {
        system("cls");
        cout << "============ Menu Admin============ " << endl;
        cout << "|| 1. Parent                 ||" << endl;
        cout << "|| 2. Child                  ||" << endl;
        cout << "|| 0. back                   ||" << endl;
        cout << "============================== " << endl;
        cout << "Choose your option : ";
        cin >> option;

        if (option == 1) {
            menuParent(LB);
        }
        else if (option == 2) {
            menuChild(LP);
        }
    }
}

void menuParent(listBis &LB){
    int option = -99;
    while (option != 0) {
        system("cls");
        cout << "============ Menu Parent============ " << endl;
        cout << "|| 1. insert first          ||" << endl;
        cout << "|| 2. insert last           ||" << endl;
        cout << "|| .....dst                 ||" << endl;
        cout << "|| 0. back                  ||" << endl;
        cout << "============================== " << endl;
        cout << "Choose your option : ";
        cin >> option;

        if (option == 1) {
            cout << "you choose option 1" << endl;
            // nanti isi insert first bis
            system("pause");
        }
        else if (option == 2) {
            cout << "you choose option 2" << endl;
            // nanti isi insert last bis
            system("pause");
        }
    }
}

void menuChild(listPenumpang &LP){
    int option = -99;
    while (option != 0) {
        system("cls");
        cout << "============ Menu Child============ " << endl;
        cout << "|| 1. insert first          ||" << endl;
        cout << "|| 2. insert last           ||" << endl;
        cout << "|| .....dst                 ||" << endl;
        cout << "|| 0. back                  ||" << endl;
        cout << "============================== " << endl;
        cout << "Choose your option : ";
        cin >> option;

        if (option == 1) {
            cout << "you choose option 1" << endl;
            // nanti isi insert first penumpang
            system("pause");
        }
        else if (option == 2) {
            cout << "you choose option 2" << endl;
            // nanti isi insert last penumpang
            system("pause");
        }
    }
}
