#include <iostream>
using namespace std;
class student{
private:
char name[20],address[20];
int roll,zip;
public:
student();//Constructor
~student();//Destructor
void read();
void display();
};

student::student(){
  cout<<"\nThis is the Student Details constructor called ......"<<endl;
}

void student::read(){
  cout<<"\nEnter the Student name: ";
  cin>>name;
  cout<<"\nEnter the Student rollno: ";
  cin>>roll;
  cout<<"\nEnter the Student address: ";
  cin>>address;
  cout<<"\nEnter the Zipcode: ";
  cin>>zip;
}

void student::display(){
  cout<<"\nThe Entered Student details are given below: \n";
  cout<<"Stuent name: "<<name<<endl;
  cout<<"Student Roll No.: "<<roll<<endl;
  cout<<"Student Address: "<<address<<endl;
  cout<<"Zipcode: "<<zip;
}

student::~student(){
  cout<<"\n\nThe Student Details are closed ......";
}

int main(){
  student s;
  s.read();
  s.display();

  return 0;
}
