#include<iostream>
#include<vector>

using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        cin>>arr[i];
    }
}

void Output(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int Minimum_Subarray_Sum(const vector<int>& arr){
    int sum = 0;
    int minSum = arr[0];

    for(int i=0; i<arr.size(); i++){
        sum += arr[i];

        minSum = min(sum, minSum);

        if(sum > 0){
            sum = 0;
        }
    }
    return minSum;
}

int main(){
    int size;
    cout<<"Enter Size of array: ";
    cin >> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int res = Minimum_Subarray_Sum(arr);
    cout << "Minimum Subarray Sum: "<< res;
}