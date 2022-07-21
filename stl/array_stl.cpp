#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int,4> arr = {1,2,3,4};
    for(int i=0;i<4;i++)
        cout<<arr[i];
        cout<<arr.at(0);
        cout<<"\n";
        cout<<arr.size();
}