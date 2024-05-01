#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Vector{
  private:
vector<T> elements;
public:
Vector(int size, T initialValue) : elements(size, initialValue){}
void modify(int index, T value){
  if(index >= 0 && index<elements.size()){
    elements[index]=value;
  }else{
    cout<<"Invalid index!"<<endl;
  }
}

void multiply(T scalar){
  for(size_t i=0; i<elements.size(); ++i){
    elements[i] *= scalar;
  }
}

void display(){
  cout<<"vector: [";
  for(size_t i=0; i<elements.size(); ++i){
    cout<<elements[i];
    if (i!=elements.size() -1){
      cout<<", ";
    }
  }
  cout<<"]"<<endl;
}
};

int main(){
  Vector<int> intVector(5,2);

  cout<<"Intial Vector: "<<endl;
  intVector.display();

  intVector.modify(2,5);
  cout<<"Vector after modification: "<<endl;
  intVector.display();

  intVector.multiply(3);
  cout<<"Vector after multiplication: "<<endl;
  intVector.display();

  return 0;
}
