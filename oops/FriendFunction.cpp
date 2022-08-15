#include <iostream>
using namespace std;

class Distance
{
  int meters;

public:
  Distance()
  {
    meters = 0;
  }
  void DisplayData()
  {
    cout << "Meters value: " << meters << endl;
  }

  friend void addValue(Distance &d);
};

void addValue(Distance &d)
{
  d.meters = d.meters + 5;
}

int main()
{
  Distance d1;
  d1.DisplayData();

  addValue(d1);
  d1.DisplayData();

  return 0;
}