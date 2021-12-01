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
#include "invalidTime.h"
#include "timeNotation.h"

int main(){

    timeNotation myTime;
    std::cout << "The time is: " << myTime.getHour() 
    << ":" << myTime.getMinute() << ":" << myTime.getSecond()
    << ": " << myTime.getPeriod() << std::endl;
    return 0;
}