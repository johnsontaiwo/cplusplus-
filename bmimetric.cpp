#include <iostream>
#include <iomanip>
using namespace std;
int weight;
float height, BMI; 
int main(){
cout<<"please enter weight in kilograms:"<<endl;
cin>>weight;
cout<<"please enter height in meters:"<<endl;
cin>>height; 
BMI = weight / (height * height); 
cout<<setprecision(4)<<"BMI is: "<<BMI<<endl;
  return 0;
}