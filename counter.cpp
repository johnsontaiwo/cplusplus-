#include <iostream>
using namespace std;
int main() {
  int quaters,dimes,nickels,pennies,dollars,totalCoins,cents;
  cout << "Please enter the number of coins:"<<endl;
  cin >> quaters;
  cin >> dimes;
  cin >> nickels;
  cin >> pennies;
  totalCoins = (quaters * 25) + (dimes * 10) + (nickels * 5) + (pennies * 1);
  dollars = totalCoins / 100;
  cents = totalCoins % 100; 
  cout <<"The total is "<<dollars<<" dollars and "<<cents<<" cents"<<endl;
  return 0;
  
}

