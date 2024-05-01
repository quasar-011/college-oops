#include <iostream>
using namespace std;
class newarea{
public:
int area(int side){
  return (side*side);
}
int area(int length, int breadth){
  return (length * breadth);
}
float area(float radius){
  return (3.14*radius*radius);
}
float area(float base, float height){
  return (0.5*base*height);
}
float area(float tbase1, float tbase2, float theight){
  return (0.5*(tbase1+tbase2)*theight);
}
};
int main(){
  int choice, side, length, breadth;
  float radius, base, height, tbase1, tbase2, theight;
  cout<<"Choose the shape whose area you would like to find: \n";
  cout<<"1. Square\n";
  cout<<"2. Rectangle\n";
  cout<<"3. Circle\n";
  cout<<"4. Triangle\n";
  cout<<"5. Trapezium\n";
  cout<<"Enter your choice: ";
  cin>>choice;

  switch (choice) {
    case 1:
    cout<<"Enter side of Square: ";
    cin>>side;
    newarea a1;
    cout<<"The area of Square is :"<<a1.area(side);
    break;
    case 2:
    cout<<"Enter the Length and Breadth of Rectangle: ";
    cin>>length>>breadth;
    newarea a2;
    cout<<"The area of Rectangle is :"<<a2.area(length, breadth);
    break;
    case 3:
    cout<<"Enter the Radius of the Circle: ";
    cin>>radius;
    newarea a3;
    cout<<"The area of the Circle is: "<<a3.area(radius);
    break;
    case 4:
    cout<<"Enter the Base and Height of the Triangle: ";
    cin>>base>>height;
    newarea a4;
    cout<<"The area of Equilateral Triangle is: "<<a4.area(base, height);
    break;
    case 5:
    cout<<"Enter the length of Parallel sides and the Height of the Trapezium: ";
    cin>>tbase1>>tbase2>>theight;
    newarea a5;
    cout<<"The area of the Trapezium is: "<<a5.area(tbase1, tbase2, theight);
    break;
    default:
    cout<<"Invalid choice!";
    }
    return 0;
}
