#include <iostream>

using namespace std;

int main () {
    int choice ;
    int price;

    cout << "select ur tea\n";
    cout << "1. Green Tea \n";
    cout << "2. lemon Tea \n";
    cout << "3. ginger Tea \n";
    cout << "enter your choice in number : \n";

    cin >> choice;

    switch (choice)
    {
    case 1:
         price = 20;
         cout << "selected green tea. Price: " << price << endl;
         break;
    case 2:
         price = 40;
         cout << "selected lemon tea. Price: " << price << endl;
         break;
    case 3:
         price = 60;
         cout << "selected ginger tea. Price: " << price << endl;
         break;
    default:
    cout << "invalide choice" << endl;

    }
}