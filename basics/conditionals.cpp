#include <iostream>

using namespace std;

int main () {
    // string choice;
    // cout << "which choice of tea u wanna have : ";
    // cin >> choice ;

    // if(choice == "green tea") {
    //     cout<< "order confirmed"<<endl;
    // }

    // int time;

    // cout << "enter the time u wanna come (0-23) ?";
    // cin >> time;

    // if (time >= 8 && time <= 18){
    //     cout << "you can come";
    // }
    // else{
    //     cout << "sry shop is closed";
    // }

    int teacups;

    double price= 2.5 , totalprice,discount;

    cout << "enter no of cups u want ?";

    cin >> teacups;

    totalprice = price * teacups;

    if(teacups > 20 ){
        discount = 0.20;
    }
    else if (teacups >=10 || teacups <=20) {
        discount = 0.10;
    }
    else {
        discount = 0;
    }

    totalprice -= (totalprice * discount);

    cout << "total price is : " << totalprice << endl;
}