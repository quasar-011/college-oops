#include <iostream>
using namespace std;
class DB;
class DM{
private:
int meters;
float centimeters;
public:
void setDistance(int m, float cm){
meters = m;
centimeters = cm;
}
friend void addDistances(DM, DB);
};

class DB{
private:
int feet;
float inches;
public:
void setDistance(int f, float in){
feet = f;
inches = in;
}
friend void addDistances(DM, DB);
};

void addDistances(DM dm, DB db){
float dmInCentimeters = dm.meters*100+dm.centimeters;
float dbInInches = db.feet*12+db.inches;
float totalDistance = dmInCentimeters + dbInInches*2.54;
int totalMeters = totalDistance / 100;
float remainingCentimeters = totalDistance - totalMeters*100;
cout<<"TotalDistance: "<<totalMeters<<" meters and "<<remainingCentimeters<<" centimeters"<<endl;
}

int main(){
DM dm;
DB db;
int meters;
float centimeters;
cout<<"Enter distance in meters and centimeters: \n";
cin>>meters>>centimeters;
dm.setDistance(meters, centimeters);

int feet;
float inches;
cout<<"Enter distance in feet and inches: \n";
cin>>feet>>inches;
db.setDistance(feet, inches);
addDistances(dm, db);
return 0;
}
