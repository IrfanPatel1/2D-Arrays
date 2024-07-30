#include <iostream>
using namespace std;

int findMinVal(int arr[][4], int rowSize, int colSize)
{
    int minValue = INT16_MAX;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            minValue = min(arr[i][j], minValue);
        }
    }
    return minValue;
}

int main()
{
    int arr[3][4] = {
        {10, 20, 30, 40},
        {50, 55, 57, 59},
        {69, 72, 79, 89}};
    int rowSize = 3;
    int colSize = 4;

    int ans = findMinVal(arr, rowSize, colSize);
    cout << ans << endl;
    return 0;
}