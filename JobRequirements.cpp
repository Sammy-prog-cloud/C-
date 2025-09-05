#include <iostream>

using namespace std;

int main(){
    bool isCitizen = false;
    bool hasBachelorDegree = true;
    short YearsOfExperience = 1;
    bool isEligible = isCitizen && (hasBachelorDegree || YearsOfExperience >= 2);
    cout << "Is this person eligible ? " << boolalpha << isEligible;
    return 0;
}
