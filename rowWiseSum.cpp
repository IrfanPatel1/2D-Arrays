#include <iostream>
using namespace std;

void printRowSum(int arr[][3], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < colSize; j++)
        {
            sum = sum + arr[i][j];
        }  cout << sum << endl;
    }
  
}

int main()
{
    int arr[3][3] = {
        {10, 10, 10},
        {40,50, 20},
        {70, 80, 90}
        };
    int rowSize = 3;
    int colSize = 3;

     printRowSum(arr, rowSize, colSize);

  
}