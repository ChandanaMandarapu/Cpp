#include <iostream>

using namespace std;

int main () {
    int teaBags;

    cout << "enter the number of teaBags you have: ";

    cin >> teaBags;

    if(teaBags < 10) {
        // teaBags = teaBags + 5 ;
        teaBags += 5;
    }

    cout << "Your total Bags are : " << teaBags;

    return 0;
}