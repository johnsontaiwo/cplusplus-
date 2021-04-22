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
if (BMI < 18.5)
 cout<<setprecision(4)<<"BMI is: "<<BMI<< ", Status is Underweight"<<endl;
else if (BMI >= 18.5 && BMI <= 24.9 )
 cout<<setprecision(4)<<"BMI is: "<<BMI<< ", Status is Normal"<<endl;
else if (BMI >= 25.0 && BMI <= 29.9)
 cout<<setprecision(4)<<"BMI is: "<<BMI<< ", Status is Overweight"<<endl;
else if (BMI >= 30.0)
 cout<<setprecision(4)<<"BMI is: "<<BMI<< ", Status is Obese"<<endl;
  return 0;
}