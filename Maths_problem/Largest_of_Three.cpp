#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cout << "Enter a number1: ";
    cin >> a;
    cout << "Enter a number2: ";
    cin >> b;
    cout << "Enter a number3: ";
    cin >> c;

    if((a >= b) && (a >= c) ){
        cout << "Largest number :" << a;
    }
    else if((b >= a) && (b >= c)){
        cout << "Largest number :" << b;
    }else{
        cout << "Largest number " << c ;
    }

    return 0;
}