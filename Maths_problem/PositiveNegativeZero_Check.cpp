#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(n > 0){
        cout<< "Positive number ";
    }
    else if(n < 0){
        cout<< "Negative number ";
    }
    else if(n == 0){
        cout<<"Zero Number";
    }
    else{
        cout<<"Only Write Natural Number";
    }

    return 0;
}