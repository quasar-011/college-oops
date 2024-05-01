#include <iostream>
#include <string>
using namespace std;
class acc {
int no;
string name, type;
float bal;

public:
acc( string acc_name, int acc_no, string acc_type, float acc_bal){
name = acc_name;
no = acc_no;
type = acc_type;
bal = acc_bal;
} 

void deposit(float amt){
if (amt > 0){
bal = bal + amt;
cout<<"Deposit of "<<amt<<" successful!"<<endl;
}
else{
cout<<"Invalid deposit amount!"<<endl;
}
}

void withdraw(float amt){
if (amt > 0 && amt <=bal){
bal = bal - amt;
cout<<"Withdrawal of "<<amt<<" successful!"<<endl;
}
else{
cout<<"Invalid withdrawal amount!"<<endl;
}
}

void display_info(){
cout<<"Depositor name: "<<name<<endl;
cout<<"Account no: "<<no<<endl;
cout<<"Account type: "<<type<<endl;
cout<<"Balance: "<<bal<<endl;
cout<<endl;
} 
};

int main(){
acc myaccount("Arjun K", 3946, "Savings", 99999.0);
myaccount.display_info();

myaccount.deposit(500.0);
myaccount.display_info();

myaccount.withdraw(500.0);
myaccount.display_info();
return 0;
}
