#include<iostream>
using namespace std;


void GCD(int n, int m){
    
    int rem = 0;

    while(m != 0){

        rem = n % m;
        n = m;
        m = rem;
    }
    cout << "GCD = " << n;
}


int main(){
    
    int n;
    cout << "Enter a number :";
    cin>> n;

    int m;
    cout << "Enter a number :";
    cin>> m;

    GCD(n,m);
}