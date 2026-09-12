#include<iostream>
#include <vector>
using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
}


int SumOfEvenElement(const vector<int>& arr){
    int sum = 0;
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0) sum += arr[i];
    }
    return sum;
}

int main(){
    int size;

    cout<<"Enter Size of Array: ";
    cin>> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int res = SumOfEvenElement(arr);
    cout << "Result :" << res;

    
}