#include<iostream>
using namespace std;


int GCD(int n, int m){
    
    int rem = 0;

    while(m != 0){

        rem = n % m;
        n = m;
        m = rem;
    }
    return n;
}

int LCM(int n, int m) {
    return (n / GCD(n, m)) * m;
}

int main(){
    
    int n;
    cout << "Enter a number :";
    cin>> n;

    int m;
    cout << "Enter a number :";
    cin>> m;

    // GCD(n,m);
    int result = LCM(n,m);
    cout << "LCM = " << result;
}