#include <iostream>

using namespace std;

void swap(int numbers[], int i, int j)
{
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void sort(int numbers[], size_t size)
{
    for (int pass = 0; pass < size; pass++)
    {
        for (int i = 1; i < size; i++)
        {
            if (numbers[i] < numbers[i - 1])
            {
                swap(numbers, i, i - 1);
            }
        }
    }
}

int main()
{   
    int numbers[] = {10, 20, 50, 70, 120, 100};
    int size = sizeof(numbers) / sizeof(int);
    sort(numbers, size);
    for (int number : numbers)
    {
        cout << number << endl;
    }
}
