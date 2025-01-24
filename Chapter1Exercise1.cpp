/*
File Name: Chapter1Exercize1.cpp
Programer: Jose L. Torres
Class: CSC 221 - 30W
Date: Jan 24, 2025
Requirements:
Take the employees hours worked for the week
and his payrate and compute his grosspay and
display it on the monitor
*/

#include <iostream>
    using namespace std; //used to simplify cout and cin
#include <iomanip> //used to pull precision 

int main()
{
    string employeeName;
    double hourlyRate = 14;
    double hoursWorked = 0;
    double grossPay = hourlyRate * hoursWorked;
    
    cout << "Enter Employee's name: ";
        cin >> employeeName;
    cout << "What is " << employeeName << "'s Hourly Rate? ";
        cin >> hourlyRate;
    cout << "How many hours did " << employeeName << " work? ";
        cin >> hoursWorked;
    grossPay = hourlyRate * hoursWorked;
    cout << employeeName << "'s Gross Pay is $" << fixed << setprecision(2) << grossPay <<"\n\n";

    
    return 0;
}
// "\n"=new line