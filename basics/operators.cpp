#include <iostream>

using namespace std;

int main() {
   int numberOfCups;
   double pricePerCup,totalPrice,discountedPrice;
   
   
   cout << "enter how many number of cups u want to have ?\n";

   cin>> numberOfCups;

   cout << "enter the price per cup\n";

   cin >> pricePerCup;

   totalPrice = numberOfCups * pricePerCup;
   
//    applying 5% discount
   if (totalPrice > 100 ) {
    discountedPrice = totalPrice - (totalPrice * 0.05) ;
    cout << "Discounted Price is: " <<discountedPrice <<endl;
   }
   else{
    cout << "Total Price is " << totalPrice << endl;
   }
}