#include <iostream>

using namespace std;

// decfining a function with a parameter temperature 
int checkTemp(int temperature) {
    return temperature;
} 
// here i did declaration of funcs

void hiUser (int greet);

// passing a default value and not passing anything in the argument then funcn uses the default parameterwhich in here is chandu.

void hiUser (string userType = "chandu"){
    cout<< "helloo" << userType << endl;
}

int main () {

    // passing 50 as argument during funcn call we will be executing all funcns in main() func itself and here i stored the funcall to see the output in a varaible called temp of int datatype.

    int temp = checkTemp(50);
    cout << temp;
    hiUser(2);
    // hiUser("chandu");
    hiUser();
    return 0;
}

// then after i defined funcs
// defination of functions
void hiUser(int greet){
    cout << "hi" << greet <<endl;
}