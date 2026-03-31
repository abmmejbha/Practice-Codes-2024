#include <iostream>
#include <conio.h>
using namespace std;

void displayArray(int num[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }
}

int main()
{
    int number[5] = {1, 2, 4, 5, 6};
    displayArray(number); // not need to add third/square bracket
    // when calling function of array

    getch();
}
