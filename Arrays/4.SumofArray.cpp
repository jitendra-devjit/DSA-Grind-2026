#include<iostream>
#include <vector>
using namespace std;

void InputOfArray(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

int SumOfArray(const vector<int> &arr, int n){

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int size;

    cout<<"Enter Size of Array: ";
    cin>> size;

    vector<int> arr(size);

    InputOfArray(arr, size);

    int res = SumOfArray(arr, size);
    cout << "Result :" << res;
}