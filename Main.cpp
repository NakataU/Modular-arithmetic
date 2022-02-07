#include<iostream>
#include "userio.h"
#include "modlip.h"

using namespace std;

int main()
{
    int Zn;
    cout << "Please enter size of array = ";
    cin >> Zn;

    int* arr;
    
    int* n=&Zn;
    createZn(arr,Zn);


    int option;

    do {

        PrintMenu();
        cout << endl;
    cout << "Please select Option = ";
    cin >> option;
    cout << endl;
        menu(arr, Zn, option,n);
    } while (option != 0);

  
    deleteZn(arr);

    return 0;
}
	