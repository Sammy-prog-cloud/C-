#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int y = 5;
    bool result = x != y;
    cout << boolalpha << result << endl;

    char first = 'a';
    char second = 'A';
    bool results = first == second;
    cout << results;
    return 0;
}