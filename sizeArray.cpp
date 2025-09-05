#include <iostream>

using namespace std;

int main(){
    int first[] = {10, 20, 30};
    int second[] = {10, 20, 30};
    int size =  sizeof(first) / sizeof(first[0]);

    bool areEqual = true;
    for (int i = 0; i < size; i++)
        if (first[i] != second[i]){
            areEqual = false;
            break;
        }
    cout << boolalpha << areEqual << endl;
    
    return 0;
}