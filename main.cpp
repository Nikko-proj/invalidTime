/*
Write a program that prompts the user to enter time in 12-hour notation. 
The program then outputs the time in 24-hour notation. 
Your program must contain 
three exception classes: invalidHr, invalidMin, and invalidSec. 
If the user enters an invalid value for hours, 
then the program should throw and catch an invalidHr object. 
Similar conventions for the invalid values of minutes and seconds.
*/

#include <iostream>
// I think error handling classes should not be included in main.cpp
//#include "invalidTime.h" 
#include "timeNotation.h"

int main(){

    timeNotation myTime;
    /*std::cout << "The time is: " << myTime.getHour() 
    << ":" << myTime.getMinute() << ":" << myTime.getSecond()
    << " " << myTime.getPeriod() << std::endl;

    cout << "Using print function.\n";
    myTime.print();
    cout << endl;*/


    /*int counter = 0;
    do
    {
        myTime.setPeriod();
        counter++;
    } while (counter != 3);*/

    myTime.setPeriod();
    myTime.setHour();
    myTime.print();
    myTime.setMinute();
    myTime.print();
    myTime.setSecond();
    myTime.print();
    myTime.print_24();

    return 0;
}