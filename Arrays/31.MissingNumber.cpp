#include<iostream>
#include<vector>
#include<unordered_map>
#include<math.h>

using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i < arr.size(); i++){
        cin>> arr[i];
    }
}

int Missing_Number(const vector<int>& arr, int n){
    int ActualSum = 0;
    int OriginalSum = 0;
    for(int i = 1; i <= n; i++){
        ActualSum += i;
    }
    for(int i = 0; i < arr.size(); i++){
        OriginalSum += arr[i];
    }
    return (ActualSum-OriginalSum);
}


int main(){
    int size;
    cout<<"Enter Size of array: ";
    cin >> size;

    vector<int> arr(size- 1);

    InputOfArray(arr);

    int result = Missing_Number(arr, size);
    cout<<"Missing Number: "<< result;
}