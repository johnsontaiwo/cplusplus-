#include <iostream>
#include <iomanip>
// cout << setprecision(2) << d << endl;
using namespace std;
int weight;
float height, BMI; 
int main(){
cout<<"please enter weight in pounds:"<<endl;
cin>>weight;
cout<<"please enter height in inches:"<<endl;
cin>>height; 
height = height * 0.0254;
// weight = weight * 0.453592;
BMI = (weight * 0.453592) / (height * height); 
cout<<setprecision(4)<<"BMI is: "<<BMI<<endl;
  return 0;
}