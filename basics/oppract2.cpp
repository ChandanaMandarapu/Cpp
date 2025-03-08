// challenge - teabags theu have
// packs < 20 give 10 extra and display total

#include <iostream>

using namespace std;

int main () {

    int teaBags;

    cout<< "enter no.of teabags u have";

    cin >> teaBags;

    if (teaBags>20) {
        teaBags += 10;
        cout << "ur total no of bags are : " << teaBags << endl;
    }
}