#include <iostream>

using namespace std;

int check(int a) {
    if (a % 2 == 0)
        return 0;
    else
        return 1;
}

int fact(int a) {
    int factorial = 1;
    for (int i = 1; i <= a; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (check(a) == 0)
        cout << "The number is Even" << endl;
    else
        cout << "The number is Odd" << endl;

    cout << "Factorial of " << a << " is: " << fact(a) << endl;

    return 0;
}
