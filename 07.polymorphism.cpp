#include <iostream>
#include <string>
using namespace std;

class media{
protected:
string title;
float price;
public:
media(string t, float p) : title(t), price(p) {}
virtual void display(){
  cout<<"Title is: "<<title<<endl;
  cout<<"Price is: "<<price<<endl;
}
};

class book : public media{
    int numPages;
public:
book(string t, float p, int np) : media(t, p), numPages(np){}
  void display() override{
    media::display();
    cout<<"Number of pages: "<<numPages<<endl;
  }
};

class tape : public media{
protected:
float playingTime;
public:
tape(string t, float p, float pt) : media(t, p), playingTime(pt) {}
void display() override{
  media::display();
  cout<<"Playing Time: "<<playingTime<<" minutes"<<endl;
}
};

int main(){
  book b("The Great Gatsby", 249.99, 180);
  tape t("The Matrix", 149.99, 150);

  cout<<"Book Details: "<<endl;
  b.display();
  cout<<endl;

  cout<<"Tape Details: "<<endl;
  t.display();
  cout<<endl;

  return 0;
}
