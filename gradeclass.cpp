
#include <iostream>
using namespace std;
int main() {
int grade, grade2;
char temp;
cout<<"Please enter 2 grades, separated by a space:"<<endl;
cin>>grade>>grade2;
if (grade < 60 && grade2 <  60) 
   cout<<"Student failed:("<<endl;
else if(grade >= 95 && grade2 >= 95)
    cout<<"Student Graduated with Honors:)"<<endl;
else 
    cout<<"Student Graduated!"<<endl;
return 0;
}