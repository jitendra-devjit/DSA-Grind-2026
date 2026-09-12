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

int Maximum_Subarray_Sum(const vector<int>& arr){
    int sum = 0;
    int maxSum = arr[0];
    int n = arr.size();
    for(int i = 0; i < n; i++){

        sum = sum + arr[i];

        maxSum = max(maxSum, sum);

        if(sum < 0)sum = 0;
    }
    return maxSum;
}

int main(){
    int size;
    cout<<"Enter Size of array: ";
    cin >> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int res = Maximum_Subarray_Sum(arr);
    cout << "Maximum Subarray Sum: "<< res;
}