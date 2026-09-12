#include<iostream>
using namespace std;

void printPrime(int n){

    for(int i = 2; i<n; i++){
        if(n % i != 0){
            cout << n << " ";
        }
    }
}

int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;

    printPrime(num);
}