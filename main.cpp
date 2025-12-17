#include <iostream>
#include "main.h"

using namespace std;

int main(){
    listBis LB;
    listPenumpang LP;
    listRelasi LR;

    createList(LB);
    createListPenumpang(LP);
    createListRelasi(LR);

    int opt;
    do{
        system("cls");
        cout << "1. Admin\n";
        cout << "2. User\n";
        cout << "0. Exit\n";
        cin >> opt;

        if(opt == 1){
            menuAdmin(LB, LP, LR);
        }
        else if(opt == 2){
            menuUser(LB, LP, LR);
        }

    }while(opt != 0);

    return 0;
}
