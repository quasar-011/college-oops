#include <iostream>
#include <string>
using namespace std;
class person{
protected:
string name;
int code;
public:
person(string n, int c) : name(n), code(c){}
void display(){
  cout<<"Name: "<<name<<endl;
  cout<<"Code: "<<code<<endl;
}
};

class admin : virtual public person{
protected:
int experience;
public:
admin(string n, int c, int exp) : person(n, c), experience(exp){}
void display(){
  cout<<"Experience: "<<experience<<" years"<<endl;
}
};

class account : virtual public person{
protected:
float pay;
public:
account(string n, int c, float pay) : person(n, c), pay(pay) {}
void display(){
  cout<<"Pay: "<<pay<<endl;
}
};

class master : public admin, public account{
public:
master(string n, int c, int exp, float pay):person(n, c), admin(n, c, exp), account(n, c, pay) {}
void display(){
  person::display();
  account::display();
  admin::display();
}
};

int main(){
  master m("Arjun K", 6969, 69, 69000000.0);
  cout<<"Information for master object: "<<endl;
  m.display();

  return 0;
}
