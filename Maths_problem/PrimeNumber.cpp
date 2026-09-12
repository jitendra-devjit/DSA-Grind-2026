#include <iostream>
using namespace std;

bool checkPrime(int n){

    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++){
        if (n % i == 0)return false;
    }
    return true;
}

void print(int n){
    for (int i = 2; i <= n; i++){
        if (checkPrime(i)){
            cout << i << " ";
        }
    }
}

int main()
{
    int number;
    cout << "Enter Number to print the prime series: ";
    cin >> number;

    print(number);

    return 0;
}