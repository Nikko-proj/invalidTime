#include <string>
using std::string;
class timeNotation
{
private:
    int HR, MIN, SEC;
    string period;

public:
    timeNotation() : HR(0), MIN(0), SEC(0), period("AM") {}
    timeNotation(int inputHR, int inputMIN, int inputSEC, string inputPeriod) : 
    HR(inputHR), MIN(inputMIN), SEC(inputSEC), period(inputPeriod) {}
    int getHour();
    int getMinute();
    int getSecond();
    string getPeriod();
};