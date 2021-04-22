#include <iostream>
 #include <iomanip>
 using namespace std; 
 double halfprice(double p1, double p2);
 int main(){
  double p1, p2;
  double basePrice;
  double discountPrice, memberPercentage, taxRate,  totalPrice, nonmemberPrice, promotionPrice;
  string membership; 
  cout<<"Enter price of the first item:"<<endl;
  cin>>setprecision(4)>>p1;
  cout<<"Enter price of the second item:"<<endl;
  cin>>setprecision(4)>>p2;
  promotionPrice = halfprice(p1,  p2); 
  basePrice = p1 + p2;

  cin>>membership;
  cin>>taxRate; 

  if ( membership == "Y" || membership == "y"){
    memberPercentage = (promotionPrice * 10) / 100;
    discountPrice = promotionPrice - memberPercentage;
    totalPrice = ((discountPrice * taxRate) / 100) + discountPrice;
    printf("Base price = %2.2f\n", basePrice);
    printf("Price after discounts = %2.2f\n", discountPrice);
    cout<<setprecision(4)<<"Total price = " <<totalPrice<<endl;  } 
  
  if ( membership == "N" || membership == "n"){
     discountPrice = promotionPrice;
     totalPrice = ((discountPrice * taxRate) / 100) + discountPrice;
     printf("Base price = %2.2f\n", basePrice);
     printf("Price after discounts = %2.2f\n", discountPrice);
     cout<<setprecision(4)<<"Total price = "<<totalPrice<<endl;}

   return 0;
 }

 double halfprice(double p1, double p2) {
   double finalPrice;
  if(p1 > p2)
    finalPrice = (p2 / 2) + p1;
  else if (p2 > p1)
    finalPrice = (p1 / 2) + p2;
  else if (p2 = p1)
    finalPrice = (p2 / 2) + p1 ;
  
  return finalPrice;

 }