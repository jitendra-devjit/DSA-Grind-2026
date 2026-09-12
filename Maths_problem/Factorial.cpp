#include<iostream>
using namespace std;

long long Factorial(int n){

    long long fact = 1;

    while(n>0){
        fact *= n;
        n -= 1; 
    }

    return fact;
}

int main(){

    int num;

    cout<<"Enter number to find the factorial: ";
    cin >> num;

    long long result = Factorial(num);

    cout << result;

    return 0;
}