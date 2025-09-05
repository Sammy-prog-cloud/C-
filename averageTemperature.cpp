#include <iostream>

using namespace std;

int main(){
    int temperatures[] = {60, 70, 80, 90};
    double sum = 0;
        for (int temperature: temperatures)
            sum += temperature;
    short count = sizeof(temperatures) /sizeof(int);
    double averageTemperature = sum / count;
    cout << averageTemperature << endl;
    return 0;
}
