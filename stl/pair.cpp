#include<iostream>
using namespace std;

class student{
    private:
        string name;
        int age;
    public:
        void setStudent(string s , int a){
            name=s;
            age=a;
        }
        void showStudent(){
            cout<<"name is-"<<name;
            cout<<"\nage is-"<<age;
        }

};

int main()
{
    pair <string,int>p1;
    pair <int,student>p2;
    student s1;
    s1.setStudent("Nihit",20);
    p1=make_pair("Tom",19);
    p2=make_pair(1,s1);

    cout<<"\n"<<p1.first<<" "<<p1.second;
    cout<<"\n"<<p2.first<<" ";
    student s2=(p2.second);
    s2.showStudent();

}