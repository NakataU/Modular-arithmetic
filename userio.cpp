#include<iostream>
#include "userio.h"
#include "modlip.h"
using namespace std;

int check(int option, int n)
{

    
    while (!(option >= 0 && option <= n)) {

        cout << "Please enter valid Option = ";
        cin >> option;
    }
    
    return option;
       
}
    int menu(int* arr,int Zn,int option,int *n) {

        

        switch (check(option, 16))
        {
        case 1:
            Task1(arr, Zn);
            break;
        case 2:
            Task2( Zn, arr);
            break;
        case 3:
            Task3( Zn, arr);
            break;
        case 4:
            Task4( Zn, arr);
            break;
        case 5:
            Task5(arr,Zn);
            break;
        case 6:
            Task6(arr, Zn);
            break;
        case 8:
            Task8( arr, Zn);
            break;
        case 9:
            Task9(arr, Zn);
            break;
        case 11:
            Task11(arr, Zn);
            break;
        case 12:
            Task12(arr, Zn);
            break;
        case 14:
            Task14();
            break;
        case 16:
            change(arr, n);
            break;
        }
       
        return 0;
    }

   


int PrintMenu() {
    cout << endl;
	std::cout << "Menu option: " << std::endl;

		std:: cout<<"1 - Task 1: Fill array with modules"<< std::endl;
		std:: cout<<"2 - Task 2: Sum  two elements from the ring"<< std::endl;
		std:: cout<<"3 - Task 3: Subtract two elements from the ring" << std::endl;
		std:: cout<<"4 - Task 4: Multiplication of two elements from the ring"<< std::endl;
		std:: cout<<"5 - Task 5: Find reciprocal"<< std::endl;
		std:: cout<<"6 - Task 6: Find reciprocal of element" << std::endl;
		std::cout <<"8 - Task 8: Division of two elements" << std::endl;
		std::cout <<"9 - Task 9: Fast åxponentiation of a number" << std::endl;
        std::cout <<"11 - Task 11: Check if a number is a primitive root in Zn" << std::endl;
        std::cout <<"12 - Task 12: Find all the primitive roots in Zn" << std::endl;
        std::cout <<"14 - Task 14: Check if Zn is a residual field" << std::endl;
		std::cout <<"16 - Task 16: Select new Zn" << std::endl;
		
        return 0;
}