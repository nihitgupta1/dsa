#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v1 {1,2,3};
    //cout<<v1.capacity();
    vector <string> v2 (5,"yo");
    //cout<<v2.front()<<"\n";
    v1.push_back(4);
    //cout<<v1.capacity()<<"\n";
    //cout<<v1[3]<<"\n";
    for(int i=0;i<=5;i++)
        cout<<v1[i]<<endl;
    v1.pop_back();
    cout<<v1.size()<<"\n";
    cout<<v1.back()<<"\n";
    vector <int>:: iterator it=v1.begin();
    v1.insert(it+1,10);

    for(int i=0;i<=5;i++)
        cout<<v1[i]<<endl;

}