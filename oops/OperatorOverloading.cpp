#include <iostream>
using namespace std;

class Complex
{
private:
  int real, img;

public:
  Complex()
  {
    real = 0;
    img = 0;
  }
  Complex(int r, int i)
  {
    real = r;
    img = i;
  }

  void print()
  {
    cout << real << " + " << img << "i" << endl;
  }

  // operator overloading
  Complex operator+(Complex c)
  {
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
  }
};

int main()
{
  Complex c1(5, 4);
  Complex c2(2, 6);
  Complex c3;

  c3 = c1 + c2; // c3 = c1.add(c2);
  c3.print();

  return 0;
}