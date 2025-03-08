#include <iostream>

using namespace std;

int main () {
    int cups;
    bool isStudent;
    cout << "are u a student (1 for yes and 0 for no)";
    cin >> isStudent;
    cout << "how many cups have u purchased";
    cin >> cups;

    if (isStudent || cups > 15 ){
        cout << "you are eligible for a discount";
    }
    else {
        cout << "you are not eligible for a discount";
    }
}