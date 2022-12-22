#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;

void bin(unsigned int number);

int main(){
    int number, option;
    char x;

    while(true){
        cout << "=====HEXADECIMAL CALCULATOR=====" << endl
        << "Choose which base do you want to convert: " << endl
        << "1 -> Hex" << endl << "2 -> Oct" << endl << "3 -> Bin"<< endl << "0 -> Exit" << endl;
    
        cin >> option;
        if(!option){
            system("clear");
            cout << "Exit sucess..." << endl;
            sleep(1);
            system("clear");
            break;
        }
        system("clear");

        switch (option){
            case 1:
                cout << "Type number: " << endl;
                cin >> number;
                cout << "Conversion: " << "0x" << hex << number << endl << "\n\nPress ENTER to continue";
                scanf("%*c");
                cin.get(x);
                break;
            case 2:
                cout << "Type number: " << endl;
                cin >> number; 
                cout << "Conversion: " << oct << number << "\n\nPress ENTER to continue";
                scanf("%*c");
                cin.get(x);
                break;
            case 3:
                cout << "Type number: " << endl;
                cin >> number;
                cout << "Conversion: ";
                bin(number);
                cout << "\n\nPress ENTER to continue";
                scanf("%*c");
                cin.get(x);
                break;
            default:
                cout << "Invalid option. Choose another one!" << endl;
                sleep(2);
                break;
        }
        system("clear");
    }
}

void bin(unsigned int number){
    if(number / 2 != 0){
        bin(number / 2);       
    }
    cout << number % 2;
}
