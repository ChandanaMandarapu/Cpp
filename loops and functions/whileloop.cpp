#include <iostream>

using namespace std;

int main () {
    // int cups;

    // cout << "enter how many cups u want ?";
    // cin >> cups;

    // while (cups > 0)
    // {   cups--;
    //     cout  << "serving cup of tea \n" << cups << "remaining" <<endl;
        
    // }
    // cout << " all tea cups are served " << endl;

    string teaTypes[3] = {"green tea","ginger tea","lemon tea"};

    for ( int i = 0; i<3 ; i++){

        if (teaTypes[i] == "green tea") {
            cout << "skipping the  " << teaTypes[i] << endl;
            continue;
        }
        cout << "brewing " << teaTypes[i] << "..." << endl;
    }
}