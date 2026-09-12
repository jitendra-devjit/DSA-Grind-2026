#include<iostream>
using namespace std;

int main (){
    int n;
    cout << "enter number to check even or odd :";
    cin >>  n;

    if(n % 2 == 0){
        cout<<"Even :"<< n <<endl;
    }else{
        cout<<"Odd :"<< n <<endl;
    };

    return 0;
}

