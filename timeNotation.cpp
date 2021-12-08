#include "timeNotation.h"


void timeNotation::setTime(){
    //prompts user to set the time
}

void timeNotation::setHour() throw (invalidHr){
    // prototyping error handling
    try
    {
        short int *tempHour = new short int; // creates dynamic short int
        cout << "Enter the hour from 1 - 12: ";
        cin >> *tempHour;
        if(*tempHour > 12 || *tempHour < 1 || !*tempHour) // checks for hour range
            throw invalidHr();
        /*else if(!*tempHour) // checks if user entered an integer value
        {
            throw invalidHr("Must enter an integer value!");
            cin.clear();
            cin.ignore(100, '\n');
        }*/
        else
            HR = *tempHour;
        delete tempHour;
    }
    catch(invalidHr e)
    {
        cout << e.what();
        cin.clear();
        cin.ignore(100, '\n');
    }
    

}

void timeNotation::setMinute() throw (invalidMin){
    // prototyping error handling
    try
    {
        short int *tempMin = new short int;
        cout << "Enter the minute(s) from 0 - 59: ";
        cin >> *tempMin;
        if(*tempMin < 0 || *tempMin > 59 || !*tempMin) 
            throw invalidMin("Must be from 0 - 59 minutes!\n");
        else
            MIN = *tempMin;
        delete tempMin;
    }
    catch(invalidMin e)
    {
        std::cerr << e.what() << '\n';
        cin.clear();
        cin.ignore(100, '\n');
    }
    

}

void timeNotation::setSecond() throw (invalidSec){
    // prototyping error handling
    try
    {
        short int *tempSec = new short int;
        cout << "Enter the second(s) from 0 - 59: ";
        cin >> *tempSec;
        if(*tempSec < 0 || *tempSec > 59)
            throw invalidSec("Must be from 0 - 59 seconds!");
        else
            SEC = *tempSec;
        delete tempSec;
    }
    catch(invalidSec e)
    {
        std::cerr << e.what() << '\n';
    }
    

}

void timeNotation::setPeriod(){
    // prototyping error handling
    try
    {
        string tempPeriod = " ";
      
        cout << "Enter AM or PM: ";
        //std::getline(cin, tempPeriod);
        cin >> tempPeriod;
        if(tempPeriod == "AM")
            period = tempPeriod;
        else if(tempPeriod == "PM")
            period = tempPeriod;
        else
            throw tempPeriod;

       
        
    }
    catch(string e)
    {
        cout << "Must enter a valid period!\n";
    }
    
}

int timeNotation::getHour(){
    return HR;
}

int timeNotation::getMinute(){
    return MIN;
}

int timeNotation::getSecond(){
    return SEC;
}

string timeNotation::getPeriod(){
    return period;
}

void timeNotation::print(){
    if(getHour() < 10) //  if less than 10, print out extra 0
        cout << "0" << getHour() << ":";
    else
        cout << getHour() << ":";
    if(getMinute() < 10) //  if less than 10, print out extra 0
        cout << "0" << getMinute() << ":";
    else
        cout << getMinute() << ":";
    if(getSecond() < 10) //  if less than 10, print out extra 0
        cout << "0" << getSecond() << " " << getPeriod() << endl;
    else
        cout << getSecond() << " " << getPeriod() << endl;
}

void timeNotation::print_24(){
    cout << "Printing in 24-HR format\n";
    if(getPeriod() == "PM" && getHour() < 12){
        cout << getHour() + 12 << ":";
    }
    else if(getPeriod() == "PM" && getHour() == 12)
        cout << "0" << getHour() - 12 << ":";
    if(getMinute() < 10) //  if less than 10, print out extra 0
        cout << "0" << getMinute() << ":";
    else
        cout << getMinute() << ":";
    if(getSecond() < 10) //  if less than 10, print out extra 0
        cout << "0" << getSecond() << endl;
    else
        cout << getSecond() << endl;
}