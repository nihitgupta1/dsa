#include<iostream>
using namespace std;

int main(){
  int money;
  cout<<"Enter the amount - "<<endl;
  cin>>money;

  try{
    if(money > 0)
      cout<<"Your money is deposited successfully!"<<endl;
    else
      throw(money);
  }
  catch(int n){
    cout<<"You have entered a negative value";
  }

  return 0;
}