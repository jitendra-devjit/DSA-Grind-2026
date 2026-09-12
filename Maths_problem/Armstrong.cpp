#include<iostream>
#include <cmath>
using namespace std;

int digitCount(int n){

    int count = 0;
    while (n > 0){
        count++;
        n = n / 10;
    }
    return count;
}
        

int  Armstrong(int n, int count){

    int rem = 0; int result = 0;
    while(n != 0){
        rem = n % 10;
        result = result + pow(rem, count);
        n = n/10;
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter a no.: ";
    cin>> n;
    int count = digitCount(n);
    int ans = Armstrong(n, count);
    
    if(ans == n){
        cout<<n<<" is an Armstrong number";
    }
    else{
        cout<<n<<" is not an Armstrong number";
    }   
}