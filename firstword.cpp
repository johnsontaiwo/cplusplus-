#include <iostream>
#include <string>
using namespace std;

string firstword(string statement) {
 string str = statement.substr(0, statement.find(" "));
return str;
}
