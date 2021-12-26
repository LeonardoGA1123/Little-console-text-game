#include <iostream>
#include <stdlib.h>

using namespace std;

int hp = 100, atk = 12;
string nombre;

int explorar();

int main()
{
    int option = 0;

    cout << "Welcome to the Game" << endl;
    cout << "Introduce your name: "; cin >> nombre; cout << endl;

    while(option != 4){
    do{

        cout << "\nOptions: \n1. Stats  2.Explore  3.Inventory  4.Exit" << endl;
        cout << "\nChoose your option: "; cin >> option;

    }while(option < 1 || option > 4);

    if (option == 1){
        cout << "\nName: " << nombre << endl;
        cout << "Hp: " << hp << endl;
        cout << "Atk: " << atk << endl;
    }
    else if(option == 2){
        explorar();
    }
    else if (option == 3){
        cout << "\nyour inventory still empty" << endl;
    }
    else{
        cout << "\nYou out";
    }

    }

    return 0;
}

int explorar(){
    int option = 0;

    cout << "\nWhen you're exploring you see a slime";
    cout << "\nWhat you will do?";

    do{
        cout << "\nOptions:  1.Attack  2.Run  3.Touch the slime" << endl; cin >> option;
    }while(option < 1 || option > 3);

    if(option == 1){
        cout << "\nYou Attacked the slime and make him: " << atk << " of damage" << endl;
        cout << "of course, the slime bite you in self defense and make you 3 of damage" << endl;

        hp -= 3;
    }
    else if (option == 2){
        cout << "\nYou run like the wind" << endl;
    }
    else {
        cout << "\nYou touch the slime and you die" << endl;
    }

    return 0;
}
