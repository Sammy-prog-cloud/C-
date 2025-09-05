#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string to_string(double number, int precision)
{
    stringstream stream;
    stream << fixed << setprecision(precision) << number;
    string str = stream.str();
}
int main()
{
    double number = 10.34;
    cout << to_string(number, 2);
    return 0;
}