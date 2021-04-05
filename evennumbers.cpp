#include <iostream>
using namespace std;
int main(){
int num, startCount = 0, evenCount = 0, i;
cout<<"Please enter a positive integer:"<<endl;
cin>>num;
while (evenCount < num) {
  startCount++;
  if (startCount % 2 == 0) {
   cout<<startCount<<endl;
   evenCount++;
 }
}
return 0;
}