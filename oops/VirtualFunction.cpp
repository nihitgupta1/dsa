#include <iostream>
using namespace std;

class Base
{
public:
  void show()
  {
    cout << "Base class show function called" << endl;
  }
  virtual void print()
  {
    cout << "Base class print function called" << endl;
  }
};

class Derived : public Base
{
public:
  void show()
  {
    cout << "Derived class show function called" << endl;
  }
  void print()
  {
    cout << "Derived class print function called" << endl;
  }
};

int main()
{
  Base *baseptr;
  Derived derivedObj;

  baseptr = &derivedObj;
  baseptr->print();
  baseptr->show();
}