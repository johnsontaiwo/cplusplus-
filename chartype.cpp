#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
  const regex regexpSmallLetter("[a-z]");
  const regex regexpCapitalLetter("[A-Z]");
  const regex regexpDigit("[0-9]");
  const regex regexpNonAlphaXter("^.*[^a-zA-Z0-9 ].*$"); 
  string str;
  cout<<"Enter a character:"<<endl;
  cin>>str; 
  if (regex_match(str, regexpSmallLetter))
    cout<<str<<" is a lower case letter."<<endl;
  else if (regex_match(str, regexpCapitalLetter))
    cout<<str<<" is an upper case letter."<<endl;
  else if (regex_match(str, regexpDigit))
    cout<<str<<" is a digit."<<endl;
  else if (regex_match(str, regexpNonAlphaXter))
    cout<<str<<" is a non-alphanumeric character."<<endl;

  return 0; 
}