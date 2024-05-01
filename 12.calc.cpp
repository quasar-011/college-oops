#include <iostream>
using namespace std;

class calculator{
private: 
int num1, num2;

public:
calculator(int n1, int n2) : num1(n1), num2(n2) {}

int add(){
  return num1 + num2;
}

int subtract(){
  return num1 - num2;
}

int multiply(){
  return num1*num2;
 }

int divide(){
  if(num2!=0){
    return num1/num2;
  }else{
    cout<<"Error: Division by zero!";
    return 0;
  } 
  }
};

int main(){
  int num1, num2;
  char op;

  cout<<"Enter first number: ";
  cin>>num1;
  cout<<"Enter operator (+, -, *, /): ";
  cin>>op;
  cout<<"Enter second number: ";
  cin>>num2;

  calculator calc(num1, num2);

  switch(op){
    case'+':
    cout<<"Result: "<<calc.add()<<endl;
    break;
    case'-':
    cout<<"Result: "<<calc.subtract()<<endl;
    break;
    case'*':
    cout<<"Result: "<<calc.multiply()<<endl;
    break;
    case'/':
    cout<<"Result: "<<calc.divide()<<endl;
    default:
    cout<<"Invalid Operator!"<<endl;
  }
  return 0;
}
