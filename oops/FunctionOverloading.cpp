#include <iostream>
using namespace std;

class A{
public:
  void getData(int a){
    cout<<"integer value"<<endl;
  }
  void getData(double b){
    cout<<"double value"<<endl;
  }
};

int main(){
  A obj;
  obj.getData(5);
  obj.getData(5.5);
  return 0;
}