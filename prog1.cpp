#include <iostream>
using namespace std;

int main()
{

    // declaring 2D array
    //  int arr[4][3];

    // initialise 2D ARRAY
    // int arr[3][3] = {
    //     {10, 20,30},
    //     {110,120,130},
    //     {210,220,230}};
    // // cout<<arr[2][0]<<endl;
    // int rowSize = 3;
    // int colSize = 3;
    //    ******************row wise printing**********************

    // for(int rowIndex=0;rowIndex<rowSize;rowIndex++){
    //     for(int colIndex=0;colIndex<colSize;colIndex++){
    //         cout<<arr[rowIndex][colIndex]<<" ";
    //     }
    //         cout<<endl;
    // }

    // ********************Column wise printing****************************************

    // for (int row = 0; row < rowSize; row++)
    // {
    //     for (int col = 0; col < colSize; col++)
    //     {
    //         cout << arr[col][row] << " ";
    //     }
    //     cout << endl;
    // }

    // ******Taking Input Row Wise********
    int arr[2][3];
    int rowSize = 2;
    int colSize = 3;

    for (int r = 0; r < rowSize; r++)
    {
        for (int c = 0; c < colSize; c++)
        {
            cout << "Enter value for (" << r << "," << c << "):";
            cin >> arr[r][c];
        }
    }
    // Printing
    cout << "Printing 2D array:" << endl;
    for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
    {
        for (int colIndex = 0; colIndex < colSize; colIndex++)
        {
            cout << arr[rowIndex][colIndex] << " ";
        }
        cout << endl;
    }
    return 0;
}