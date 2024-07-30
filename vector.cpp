#include <iostream>
#include <vector>
using namespace std;

int main()
{
//     //creation
//     vector<int> marks;
//     marks.push_back(10);
//     marks.push_back(20);
//     marks.push_back(30);//push_back() is used for putting value in vector

//     cout<<*marks.begin()<<endl;//* dalke value access kar sakte hai
//     cout<<"Size:"<<marks.size()<<endl;
//     cout<<"Front:"<<marks.front()<<endl;
//     cout<<"Back:"<<marks.back()<<endl;

// marks.erase(marks.begin(),marks.end());
//     if(marks.empty()==true){
//         cout<<"Vector is empty"<<endl;
//     }else{
//         cout<<"Vector is not empty"<<endl;
//     }
    
    // marks.insert(marks.begin(),100);
    // cout<<"New Marks:"<< *marks.begin()<<endl;
    // vector<int>miles(10);

    // vector<int>Distance(10,15);//Initialising vector with 15

    vector<int>first;
    // vector<int>second;

    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);


// *******************ITERATOR***************************

    vector<int>::iterator it=first.begin();

    while(it != first.end()){
        cout<<*it<<" ";
        it++;
    }
// *****************changes**************


    // second.push_back(100);
    // second.push_back(110);
    // second.push_back(120);
    // second.push_back(130);

    // first.swap(second);

    // cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<" "<<first[3]<<" "<< endl;

    // for(int i:first){
    //     cout<<i<<" ";
    // }
    // for(int j:second){
    //     cout<<j<<" ";
    // }




}