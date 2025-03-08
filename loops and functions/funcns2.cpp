#include<iostream>

using namespace std;


void addNum (int num) {
    num = num + 5 ;
    cout << "sum :" << num << endl;
}
int main ( ) {
    // pass by value & pass by reference

    int numb = 4;
    addNum(numb);
    return 0;
}