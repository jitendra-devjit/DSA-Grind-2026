#include<iostream>
#include <vector>
using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
}


int SumOfOddElement(const vector<int>& arr){
    int Sum = 0;
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
           
            Sum = Sum + arr[i];
        }
    }
    return Sum;
}

int main(){
    int size;

    cout<<"Enter Size of Array: ";
    cin>> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int res = SumOfOddElement(arr);
    cout << "Result :" << res;

    
}