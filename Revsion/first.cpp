#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 20; i+=2)
    {
        cout << i << endl;
    }

    int num;
    cout << "Enter a number (0 to stop): ";
    cin >> num;

    while (num != -1)
    {
        cout << "You entered: " << num << endl;
        cout << "Enter again (0 to stop): ";
        cin >> num;
    }
}