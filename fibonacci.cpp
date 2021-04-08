#include <iostream>
using namespace std;

int main() {
 int n, f1 = 1, f2 = 1, nextf, i;
//cout<<"Please enter a positive integer greater than 1:"<<endl;
cin>>n;
cout<<f1<<endl;
cout<<f2<<endl;
for (i=2; i<n; i++){

nextf = f1+f2;
cout<<nextf<<endl;
f1 = f2;
f2 = nextf;

}
  return 0;
}