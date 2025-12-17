#include <iostream>
#include "bis.h"
#include "penumpang.h"
#include "main.h"

using namespace std;

int main(){
    listBis LB;
    listPenumpang LP;

    createList(LB);
    createListPenumpang(LP);

    int option = -99;

    while (option != 0) {
        system("cls");
        cout << "============ Menu ============ " << endl;
        cout << "|| 1. Admin                 ||" << endl;
        cout << "|| 2. User                  ||" << endl;
        cout << "|| 0. Exit                  ||" << endl;
        cout << "============================== " << endl;
        cout << "Choose your option : ";
        cin >> option;

        if (option == 1) {
            menuAdmin(LB, LP);
        }
        else if (option == 2) {
            menuUser(LB, LP);
        }
        else if (option == 0) {
            cout << "Program selesai." << endl;
        }
        else {
            cout << "Pilihan tidak tersedia." << endl;
            system("pause");
        }
    }

    return 0;
}
