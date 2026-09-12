#include<iostream>
#include <vector>
using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
}

int ProductOfArray(const vector<int>& arr){

    int prod = 1;
    for(int i=0; i<arr.size(); i++){
        prod *= arr[i];
    }
    return prod;
}

int main(){
    int size;

    cout<<"Enter Size of Array: ";
    cin>> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int res = ProductOfArray(arr);
    cout << "Result :" << res;
}