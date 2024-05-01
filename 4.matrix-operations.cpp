#include <iostream>
using namespace std;
class MAT{
private:
int a[2][2];

public:
MAT(){
for(int i=0; i<2; i++){
for(int j=0; j<2; j++){
a[i][j] = 0;
}
}
}

void accept(){
cout<<"\nEnter 4 elements:";
for(int i=0; i<2; i++){
for(int j=0; j<2; j++){
cin>>a[i][j];
}
}
}

void display(){
cout<<endl;
for(int i=0; i<2; i++){
for(int j=0; j<2; j++){
cout<<" "<<a[i][j];
}
cout<<endl;
}
}

MAT operator+(const MAT& M2)const{
MAT result;
for(int i=0; i<2; i++){
for(int j=0; j<2; j++){
result.a[i][j] = a[i][j] + M2.a[i][j];
}
}
return result;
}

MAT operator-(const MAT& M2)const{
MAT result;
for(int i=0; i<2; i++){
for(int j=0; j<2; j++){
result.a[i][j] = a[i][j] - M2.a[i][j];
}
}
return result;
}

MAT operator*(const MAT& M2)const{
MAT result;
for(int i=0; i<2; i++){
for(int j=0; j<2; j++){
for(int k=0; k<2; k++){
result.a[i][j] += a[i][k]*M2.a[k][j];
}
}
}
return result;
}
};

int main(){
MAT M1, M2, M3;

cout<<"\nEnter Matrix M1 values:";
M1.accept();

cout<<"\nEnter Matrix M2 Values:";
M2.accept();
M3=M1+M2;
cout<<"\nAddition of M1+M2: ";
M3.display();

M3 = M1 - M2;
cout<<"\nSubstraction of M1-M2: ";
M3.display();

M3 = M1*M2;
cout<<"\nMultiplication of M1*M2: ";
M3.display();

return 0;
}
