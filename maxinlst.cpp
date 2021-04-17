#include <iostream>
using namespace std; 

int maxinlst(int arr[], int n){
  
  int currentMax = 0;
  int i; 
  for(i = 1; i <= n; i++){
     if(arr[i] > currentMax) {
       currentMax = arr[i];
      }
  }

return currentMax;
}