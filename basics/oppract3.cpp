#include <iostream>

using namespace std;

int main () {
    int cups ;
    bool isUser; 

    cout << "if ur a user enter 1"; 
    cout << "enter number of cups u wanna buy" << endl;
    cin >> cups;

    if(isUser && cups > 12 ){
        cout << "your qualified for a discount congoo!!";
    }
}