#include <iostream>

using namespace std;

enum level{
    LOW = 1,
    MEDIUM,
    HIGH
};

int main(){
    enum level myVar = MEDIUM;
    cout << myVar << endl;  
    
    switch(myVar){
        case 1:
            cout << "Low Level";
            break;
        case 2:
            cout << "Medium Level";
            break;
        case 3:
            cout << "High Level";
            break;
    }
}