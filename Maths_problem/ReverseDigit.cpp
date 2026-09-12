#include<iostream>
using namespace std;

int printReverseDigit(int n){

    int rem = 0;
    int ans = 0;
    while(n > 0){

        rem = n % 10;

        ans = (ans * 10) + rem;

        n = n/10;
    }
    return ans;
}

int main(){

        int n;
        cout << "enter a digit for reverse: ";
        cin >> n; 
        
        int result = printReverseDigit(n);
        cout<< result;
}