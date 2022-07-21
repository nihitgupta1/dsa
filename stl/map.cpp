#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <int,string> customer;

    customer[10]="michael";
    customer[20]="john";
    customer[30]="henry";
    customer[40]="carl";

    map <int,string> c { {10,"michael"},{20,"john"} };

    map <int,string>:: iterator p=customer.begin();
    while(p!=customer.end())
    {
        cout<<p->second<<"\n";
        p++;
    }

    cout<<customer.empty();

    customer.insert(pair<int,string>(50,"kevin"));

    map <int,string>:: iterator q=customer.begin();
    while(q!=customer.end())
    {
        cout<<q->second<<"\n";
        q++;
    }
}