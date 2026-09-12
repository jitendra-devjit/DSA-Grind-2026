#include<iostream>
using namespace std;

int SumOfDigit(int n){

    int rem = 0;
    int sum = 0;
    while(n > 0){

        rem = n % 10;

        sum = sum + rem;

        n = n/10;
    }
    return sum;
}

int main(){

        int n;
        cout << "enter a digit for Sum: ";
        cin >> n; 
        
        int result = SumOfDigit(n);
        cout<<"Sum of Digit: "<< result;
}