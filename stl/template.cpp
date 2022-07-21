
#include<iostream>
using std::cout;
using std::cin;

template <class T>
T greater(T a, T b)
{
    if(a>b)
    return (a);
    else
    return (b);
}

int main()
{
    cout<< greater(5.6,8.1);
}