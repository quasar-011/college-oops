#include <iostream>
using namespace std;

class MyClass{
  private:
  int data;
  public:
  MyClass(int d) : data(d) {}
  void display(){
    cout<<"Data: "<<data<<endl;
    cout<<"Memory Address: "<<this<<endl;
  }
};

int main(){
  MyClass obj1(10);
  cout<<"Object 1: "<<endl;
  obj1.display();

  MyClass* obj2 = new MyClass(20);
  cout<<"Object 2: "<<endl;
  obj2->display();

  return 0;
}
