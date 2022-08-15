#include <iostream>
using namespace std;

class A
{
public:
  void display()
  {
    cout << "class A" << endl;
  }
};

class B : public A
{
public:
  void display()
  {
    cout << "class B" << endl;
  }
};

int main()
{
  B obj;
  obj.display();
  obj.A::display();
  return 0;
}