#include <iostream>

using namespace std;

int main () {

    int teaCups;

    cout << "enter the number of cups u have : "<<endl;
    cin >> teaCups;

    if(teaCups > 20) {
        cout << "congo u will get a gold badge";
    } 
    else if(teaCups >= 10 && teaCups <= 20 )
    {
         cout << "congo u will get a silver badge" << endl;
    }
    else {
        cout << "No badge bro" << endl;
    }

    return 0;
}