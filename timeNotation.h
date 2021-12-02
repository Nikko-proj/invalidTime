#include <string>
#include <iostream>

using std::endl;
using std::cout;
using std::cin;
using std::string;
class timeNotation
{
private:
    int HR, MIN, SEC;
    string period;

public:
    timeNotation() : HR(0), MIN(0), SEC(0), period("AM") {} // constructor
    timeNotation(int inputHR, int inputMIN, int inputSEC, string inputPeriod) : 
    HR(inputHR), MIN(inputMIN), SEC(inputSEC), period(inputPeriod) {} // constructor 
    void setTime(); // asks user to set the time
    void setHour(); // Takes an integer from 1-12 and sets it as the hour
    void setMinute(); // Takes an integer from 0-59 and sets it as the minutes
    void setSecond(); // Takes an integer from 0-59 and sets it as the seconds
    void setPeriod(); // Asks user for AM or PM
    int getHour(); // returns the hour
    int getMinute();// returns the minute  
    int getSecond(); // returns the second
    string getPeriod(); // returns AM or PM
    void print(); //  prints time
};