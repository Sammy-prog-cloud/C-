#include <iostream>

using namespace std;

class Employee
{
private:
    int salary;

public:
    void setSalary(int salaryStaff)
    {
        salary = salaryStaff;
    }

    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee mySalary;
    mySalary.setSalary(50000);
    cout << mySalary.getSalary();
    return 0;
}