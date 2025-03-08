#include <iostream>
#include <string>

using namespace std;
int main() {

    int leaves = 60;
    float waterTemp = 90.9;
    double priceOfTea = 25.99;
    char teaGrade = 'A';
    bool isTeaReady = 1;

    cout << leaves << endl;
    cout << waterTemp << endl;

    // datamodifiers
    // unsigned - only positive are allowed
    unsigned smallTeaPack = 100;
    // bigbro of int
    long largeTeaPack = 1003030;
    short teaSample = 23;

    // EXPLICIT TYYPEACSTING
    // here we have explicitrly converted the price frm float to int and it doesnt throw an error
    float teaPrice = 92.5;
    int roundedPrice = (int) teaPrice;
    cout<< roundedPrice << endl;

    //  strings datatpes first import string 

    string favTea = "ginger tea\n";
    cout << favTea <<endl;

    string description = "knowns as \"flavored\" full tea";
    cout << description << endl;

    string userTea;
    int teaQuantity;

    cout << "what would u like to order in tea ? \n ";

    getline(cin,userTea);
    
    cout << "how many cups " << userTea << "would u like to have ? \n";

    cin >> teaQuantity ;

    cout << teaQuantity;
    cout << userTea;

    return 0;
}