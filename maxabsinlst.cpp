#include <iostream>
using namespace std; 

int maxabsinlst(int arr[], int n){
  
  int currentMax = 0;
  int i;
  int convertedi; 
  for(i = 0; i < n; i++) {
      arr[i] = abs(arr[i]);
      // convertedi = (arr[i]) * (-1);
      // arr[i] = convertedi;
    if(arr[i] > currentMax) 
     currentMax = arr[i];
    }
  return currentMax;
}

// #include <iostream>
// using namespace std; 

// int maxabsinlst(int arr[], int n){
  
//   int currentMax = 0;
//   int i;
//   int convertedi;
//   //cout<<currentMax<<endl; 
//   for(i = 0; i < n; i++) 
//      //convertedi = abs(i);
//      convertedi = abs(arr[i]);
//     //convertedi = (arr[i]) * (-1);
//     arr[i] = convertedi;
//       //arr[i] = abs(arr[i]);
//       //cout<<arr[i]<<endl;
//     if(convertedi > currentMax) 
//        currentMax = convertedi;
//        //cout<<currentMax<<endl;
     
//   cout<<currentMax<<endl;
//   return currentMax;
// }
//       