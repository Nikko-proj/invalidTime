// Used for error handling
#include <string>
#include <iostream>

using std::endl;
using std::cout;
using std::string;


// error handling classes
class invalidHr {
    private:
        string msg; // private string for error message
    public:
        invalidHr(); // default constructor
        invalidHr(string); // user set constructor
        string what(); // string function to return msg
};

class invalidMin {
    private:
        string msg;
    public:
        invalidMin();
        invalidMin(string);
        string what();
};

class invalidSec {
    private:
        string msg;
    public:
        invalidSec();
        invalidSec(string);
        string what();
};