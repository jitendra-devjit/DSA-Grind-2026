#include <iostream>
using namespace std;

void printNumber(int n){
    for(int i=1; i<=n; i++ ){
        cout << i << " ";
    }
}

int main(){
    
    int n;
    cout<< "Enter a Stop number "; 
    cin >> n;

    printNumber(n);
   

    return 0;
}