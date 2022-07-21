#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l1{10,20,30,5,90,80,50,15};
    l1.sort();
    list <int>:: iterator p=l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<"\n";
    l1.reverse();
     list <int>:: iterator q=l1.begin();
    while(q!=l1.end())
    {
        cout<<*q<<" ";
        q++;
    }
}