#include <iostream>
#include "realize.h"
int main()
{
    int N = 10;
    int arr[N];
    int mas[N];
    FillArray(arr, N);
    ShowArray(arr, N);
    HoldArray(arr, mas, N);
    MinMax(arr, N);
    EvenNumbers(arr, N);
    TwoDimensionalArray(arr, N);
    AverageValue(arr, N);
    ArrayWithoutRepeats(arr, N);
    IdenticalElements(arr, N);
    Sort(mas, N);
}

