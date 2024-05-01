#include <iostream>
using namespace std;

int divide(int dividend, int divisor){
  if (divisor == 0){
    throw"Division by zero exception";
  }
  return dividend/divisor;
}

int main(){
  int dividend, divisor;

  cout<<"Enter Dividend: ";
  cin>>dividend;
  cout<<"Enter Divisor: ";
  cin>>divisor;

  try{
    int result = divide(dividend, divisor);
    cout<<"Result of division: "<<result<<endl;
  }catch(const char* error){
    cout<<"Exception Caught: "<<error<<endl;
  }

  return 0;
}
