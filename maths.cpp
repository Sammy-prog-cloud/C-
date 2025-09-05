#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
    double result = floor(1.2);
    double power = pow(2, 3);
    cout << "result : " << result << endl;
    cout << "power : " << power << endl;
    

    const short minValue =  1;
    const short maxValue = 6;
    srand(time(0));
    short first = (rand() % (maxValue - minValue  + 1)) + minValue;
    short second= (rand() % (maxValue - minValue  + 1)) + minValue;
    cout << first << ", " << second << endl;

    cout << numeric_limits <long long> :: min() << endl
         << numeric_limits <long long> :: max() << endl;

    int number = numeric_limits <int> :: min();
    cout << number -- << endl;

    bool isNewUser =  1;
    cout << boolalpha << isNewUser << endl;

    cout << "what's your Name? : ";
    string name;
    getline(cin, name);
    cout << "Hi " <<  name;
}
