#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int maximum(int x, int y, int z);

int main()
{
    int number1;
    int number2;
    int number3;

    cout << "Enter three integers: ";
    cin >> number1 >> number2 >> number3;

    cout << "Maximum is: "
        << maximum(number1, number2, number3) << endl;

    system("pause");
    return 0;
}

int maximum(int x, int y, int z)
{
    int max = x;

    if (y > max)
    {
        max = y;
    }

    if (z > max)
    {
        max = z;
    }

    return max;
}