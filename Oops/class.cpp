#include <iostream>
#include <vector>

using namespace std;


class hello {
    // variables defined in a class is called attributes or datamembers
    // data members (attributes)
    string myName; // name of me
    int numb; // number of smtng
    vector<string> frnds; //list of frnds

    // we can define functionality

    // member function - a funcn method defined in a class is called member function

    void displayNames() {
        cout << "Name : " <<myName << endl;
        cout << "Numbers : " << numb << endl;
    }
};

int main() {
    return 0;
}

