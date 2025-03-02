/*
Amerike University
Author: Ali Angel
Work #: 5
Date: 01/03/2025
Description: This program will act as a calculator, asking the user what operation they want to do and showing them the result
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){

    int opt;
    float opNumber1, opNumber2;
   
    cout << "The following program will act as a calculator, press the number of the operation you want to execute when asked";
    cout << ", Press Any Key to Continue";
    getch();
    cout << "\n1. Addition\n2. Substraction\n3. Muliplication\n4. Division";
    cout << "\nNumber of operation you want to perform: ";
    cin >> opt;
    if(opt == 1)
    {
        cout << "Write the first number you want to use: ";
        cin >> opNumber1;
        cout << "Now write the second number you want to use: ";
        cin >> opNumber2;
        cout << "The result of the operation is: " << opNumber1 + opNumber2;
    }else if(opt == 2)
    {
        cout << "Write the number you want substracted: ";
        cin >> opNumber1;
        cout << "Now write the number you want to substract: ";
        cin >> opNumber2;
        cout << "The result of the operation is: " << opNumber1 - opNumber2;
    }else if(opt == 3)
    {
        cout << "Write the number you want multiplied: ";
        cin >> opNumber1;
        cout << "Now write number you want it multiplied by: ";
        cin >> opNumber2;
        cout << "The result of the operation is: " << opNumber1 * opNumber2;
    }else if (opt == 4)
    {
        cout << "Write the number you want divided: ";
        cin >> opNumber1;
        cout << "Now write number you want to divide it by: ";
        cin >> opNumber2;
        cout << "The result of the operation is: " << opNumber1 / opNumber2;
    }else {
        cout<< "INVALID OPTION";
    }
}