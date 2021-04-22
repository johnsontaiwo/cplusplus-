#include <iostream>
#include <string>
using namespace std;

int main(){

  string str,newstr, anotherstr;
  cout<<"Enter an odd length string:"<<endl;
  getline(cin, str);
  int x = (str.length()/2)+1;
  cout<<"Middle Character: "<<str[(str.length()/2)]<<endl;
  for(int i = 0 ; i < str.length()/2; i++)
  newstr += str[i]; 
  cout<<"First half: "<<newstr<<endl;
  for(int i = x ; i < str.length(); i++)
  anotherstr += str[i]; 
  cout<<"Second half: "<<anotherstr;
  
  return 0;

}