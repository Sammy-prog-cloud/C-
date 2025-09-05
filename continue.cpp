#include <iostream>
#include <vector>

using namespace std;

int main(){
    for (int i = 0; i < 5; i++){
        if (i % 3 == 0)
            continue;
        cout << i << endl;
    }  

    int i = 10;
    do {
    cout << "i is " << i << endl;
    i++;
    } while (i < 5);


    int ages[6] = {10, 20, 30, 40, 50, 60};
    //int i;
    int length = sizeof(ages)/sizeof(ages[0]);
    int lowestAge = ages[0];
    for (int age : ages){
        if (lowestAge > age){
            lowestAge = age;
        }
    }
    cout << "Lowest age is : " << lowestAge << endl;
}