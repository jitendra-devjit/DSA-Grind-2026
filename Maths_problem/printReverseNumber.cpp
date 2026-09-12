#include <iostream>
using namespace std;

int printCount(int n){

    int count = 0;
    for(int i=0; n > 0; i++){
        
        n = n / 10;
        count++;

    }
    return count;
}

int main(){
    
    int n;
    cout<< "Enter a number "; 
    cin >> n;

    int result = printCount(n);
    cout << "count of all N is : "<< result;

    return 0;
}