
#include <iostream>
using namespace std;
int main() {
int num = 4,even, odd, count, curr;
cout<<"Please enter 4 positive integers, separated by a space:"<<endl;
 even = 0;
 odd = 0;
 for (count = 1; count <= num; count++) {
  cin>>curr;
   if (curr % 2 == 0){
   even ++;
  }
   else
   odd++;
   }
if (odd > even) {
  cout<<"more odds"<<endl;
}
else if (even > odd) {
  cout<<"more evens"<<endl;
}
else 
  cout<<"same number of evens and odds"<<endl;

return 0;
}

