// Used for error handling
#include "invalidTime.h"

invalidHr::invalidHr(){
    msg = "Hour must be between 1 & 12.\n";
}

invalidHr::invalidHr(string input){
    msg = input;
}

string invalidHr::what(){
    return msg;
}

invalidMin::invalidMin(){
    msg = "Minutes must be between 0 & 59.\n";
}

invalidMin::invalidMin(string input){
    msg = input;
}

string invalidMin::what(){
    return msg;
}

invalidSec::invalidSec(){
    msg = "Seconds must be between 0 & 59.\n";
}

invalidSec::invalidSec(string input){
    msg = input;
}

string invalidSec::what(){
    return msg;
}