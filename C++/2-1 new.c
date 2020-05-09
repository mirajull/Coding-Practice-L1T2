#include<algorithm>
#include<iostream>
using namspace std;

int main()
{
    vector<int>array;
    array.push_back(10);
    array.push_back(20);
    array.push_back(30);
    for(int i=0,i< array.size();i++){
        cout<<array[i]<<endl;
    }
    return 0;
}
