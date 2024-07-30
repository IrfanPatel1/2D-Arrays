#include <iostream>
#include<vector>
using namespace std;
// Function call karege tab array ka column dena compulosry hai kyuki array converison ke liye colum imp hai c=i*j formul ke liya
// bool search2DArray(int arr[][4], int rowSize, int colSize, int target)
// {
//     for (int i = 0; i < rowSize; i++)
//     {
//         for (int j = 0; j < colSize; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

int main()
{


    vector<vector<int>>arr(4,vector<int>(3,0));
    int rowSize=arr.size();
    int colSize=arr[0].size();

    for(int i=0;i<rowSize;i++){
        for (int j=0;j<colSize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }




    // int arr[3][4] = {
    //     {10, 20, 30, 40},
    //     {50, 55, 57, 59},
    //     {69, 72, 79, 89}
    //     };
    // int rowSize = 3;
    // int colSize = 4;
    // int target = 80;

    // bool ans=search2DArray(arr, rowSize, colSize, target);

    // cout<<ans;

        // return 0;
}