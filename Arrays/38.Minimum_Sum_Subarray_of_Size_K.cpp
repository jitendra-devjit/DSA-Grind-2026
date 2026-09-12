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

int Minimum_Sum_Subarray_of_Size_K(const vector<int>& arr, int k){
    int sum = 0;
    
    int n = arr.size();
    int j = 0;
    for(int i=0; i < k; i++){
        sum += arr[i];
    }
    int minSum = sum;

    for(int i=k; i<n; i++){
        sum = sum - arr[i-k] + arr[i];
        minSum = min(sum, minSum);
    }
    return minSum;
}


int main(){
    int size;
    cout<<"Enter Size of array: ";
    cin >> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int k;
    cin >> k;

    int res = Minimum_Sum_Subarray_of_Size_K(arr, k);
    cout << res;
}