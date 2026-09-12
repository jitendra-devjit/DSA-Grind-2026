#include<iostream>
using namespace std;

void FibonacciSeries(int n){

    int first = 0; int second = 1;

    if(n >= 1){
        cout << first <<" ";
    }
    if(n >= 2){
        cout << second <<" ";
    }

    for(int i = 3; i<=n; i++){
        
        int fibo = first + second;
        cout << fibo << " ";

        first = second;
        second = fibo;
    }
}

int main(){

    int num; 
    cout <<"Enter a number for Fibonacci Series: ";
    cin >> num;

    FibonacciSeries(num);

}