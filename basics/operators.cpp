#include <iostream>

using namespace std;

int main() {
   int numberOfCups;
   double pricePerCup;
   int totalPrice = numberOfCups * pricePerCup;
   
   cout << "enter how many number of cups u want to have ?\n";

   cin>> numberOfCups;

   cout << "enter the price per cup\n";

   cin >> pricePerCup;

   cout << totalPrice;

   if (totalPrice > 100) 
   {
    totalPrice = totalPrice/5;
    cout << totalPrice << endl;
   }
   else {
    cout << "nodiscount" << endl;
   }
}