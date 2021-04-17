#include <iostream>
using namespace std;

bool isleapyear(int year) {
 bool leapyear = true, notleapyear = false; 
  if ((year % 100 == 0) && (year % 400 == 0) && (year % 4 == 0)) {
   return leapyear;}
  
  else if ((year % 4 == 0) && (year % 100 != 0)) {
   return leapyear;}
 
 else 
    return notleapyear;
 
}