#include "timeNotation.h"

void timeNotation::setTime(){
    //prompts user to set the time
}

void timeNotation::setHour(){

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