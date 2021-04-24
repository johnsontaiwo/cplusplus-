#include <iostream>
#include <string>
using namespace std;

string remainingwords(string statement) {
  string str1 = statement.substr(0, statement.find(" "));
  string str2 = statement.substr(statement.find(" ") + 1, statement.size() - str1.size());
  return str2;
}
 
