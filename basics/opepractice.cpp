// challenge 1 
// program that caluclate price of teapacks
// user input price 
// apply 10%taz to totalprice and displayfinalcost

#include <iostream>

using namespace std;

int main (){

    int teapacks,price,totalprice,discountedprice;

    cout << "enter the no of packs u want :" << endl;
    cin >> teapacks;
    cout << "enter the price for each pack : " << endl;
    cin >> price;

    totalprice = teapacks * price;
    cout << "ur total price is : " << totalprice << endl;

    discountedprice = (totalprice-100);

    cout<<"ur discounted price is : " << discountedprice << endl;
 }