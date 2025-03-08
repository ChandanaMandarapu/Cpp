#include <iostream>

using namespace std;

int main () {
    string response;
    do {
        cout << "do u want more tea (yes/no)";
        cin >> response;
    } while (response != "no" || response != "No");
}