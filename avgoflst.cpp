#include <iostream>
using namespace std; 

int avgoflst(int arr[], int n){
  
  int currentval = 0;
  int i, average; 
  for(i = 0; i < n; i++){
     
      currentval += arr[i];
      average = currentval / n; 
  }

return average;
}