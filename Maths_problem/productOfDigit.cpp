#include<iostream>
using namespace std;

int ProductOfDigit(int n){

    int rem = 0;
    int product = 1;
    while(n > 0){

        rem = n % 10;

        product *= rem;

        n = n/10;
    }
    return product;
}

int main(){

        int n;
        cout << "enter a digit for product: ";
        cin >> n; 
        
        int result = ProductOfDigit(n);
        cout<<"product of Digit: "<< result;
}