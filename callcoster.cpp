#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 


int main(){
  string day;
  double starttime;
  int duration;
  double cost;
  float price;
  cout<<"Enter the day the call started at:"<<endl;
  cin>>day;
  cout<<"Enter the time the call started at (hhmm):"<<endl;
  cin>>starttime;
  cout<<"Enter the duration of the call (in minutes): "<<endl;
  cin>>duration;
 
  if ((starttime >= 800 && starttime <= 1800) && (day == "Mon" || day == "Tue" || day == "Wed" || day == "Thr" || day == "Fri"  || day == "mon" || day == "tue" || day == "wed" || day == "thr" || day == "fri" )){
      day = day;
      price = 0.40;
      cost = price * duration;
      printf("This call will cost $%2.2f\n", cost);}
  else if ((starttime < 800 || starttime > 1800)&& (day == "Mon" || day == "Tue" || day == "Wed" || day == "Thr" || day == "Fri" || day == "mon" || day == "tue" || day == "wed" || day == "thr" || day == "fri"  )){
      price = 0.25;
      cost = price * duration;
      printf("This call will cost $%2.2f\n", cost);}
  else if (day  == "Sat" || day == "Sun" || day == "sat" || day == "sun"){
      price = 0.15;
      cost = price * duration;
      printf("This call will cost $%2.2f\n", cost);}

 return 0;
}
   


