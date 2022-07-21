#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    s1="hello";
    cout<<s1.size()<<endl; 
    cout<<s1<<"\n";
    string s2=" world";
    s2=s1+s2;
    cout<<s2<<endl;
    char s3[]="yo\n";
    cout<<s3;
    s2.insert(5,"!");
    cout<<s2<<"\n";
    cout<<s1.replace(1,2 ,"replace");

    
}