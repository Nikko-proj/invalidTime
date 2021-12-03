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
        if(*tempHour > 12 || *tempHour < 1)
            throw invalidHr();
        else
            HR = *tempHour;
        delete tempHour;
    }
    catch(invalidHr e)
    {
        cout << e.what();
    }
    

}

void timeNotation::setMinute(){

}

void timeNotation::setSecond(){

}

void timeNotation::setPeriod(){
    // prototyping error handling
    try
    {
        cout << "Set AM or PM: ";
        cin >> this->period;
        if(period != "AM" || period != "PM")
            throw period;
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
    cout << getHour() << ":" << getMinute() << ":" << getSecond() << " " <<
    getPeriod() << endl;
}