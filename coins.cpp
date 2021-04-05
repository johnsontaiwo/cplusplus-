#include <iostream>
using namespace std;
int main() {
 
 int dollars, cents, quarters, quarters_in_dollars, quarters_in_cents, dimes, nickels, pennies, reduced_cents, pennies_in_cents;

cout<<"Please enter the amount of money to convert:"<<endl;
cin>>dollars;
cin>>cents;

quarters_in_cents = cents / 25; 
quarters_in_dollars = dollars / 0.25; 
quarters = quarters_in_dollars + quarters_in_cents;
dimes = (cents - (quarters_in_cents * 25)) / 10;
reduced_cents = (cents - (quarters_in_cents * 25)) - (dimes * 10);
nickels = reduced_cents / 5; 
pennies_in_cents = reduced_cents - (nickels * 5);
pennies = pennies_in_cents / 1;

cout<<"The coins are "<<quarters<<" quarters, "<< dimes<<" dimes, "<<nickels<<" nickels "<<"and "<<pennies<<" pennies"<<endl;

return 0;

}
  
