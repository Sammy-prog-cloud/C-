#include <iostream>

using namespace std;

int maxNumber(int first, int second){
    return(first > second) ? first : second;
}

int main(){
    int larger = maxNumber(9, 2);
    cout << larger;    
}
