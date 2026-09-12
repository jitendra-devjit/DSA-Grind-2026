#include <iostream>
using namespace std;

int main(){
    int a, b, c ;
    

    cout << "Enter a number1: ";
    cin >> a;
    cout << "Enter a number2: ";
    cin >> b;

    if(a == b){
        cout << "Both number equal";
    }else if(a > b){
        cout<< "Largest number is: " << a <<endl;
    }else{
        cout<< "Largest number is: " << b <<endl;
    }

    return 0;
}