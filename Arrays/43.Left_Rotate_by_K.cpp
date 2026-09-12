#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
}


void Left_Rotate_by_K(vector<int>& arr, int k){
    int n = arr.size();
    k = k % n; // Handle cases where k is larger than array size
    
    // Reverse the first k elements
    reverse(arr.begin(), arr.begin() + k);
    // Reverse the remaining elements
    reverse(arr.begin() + k, arr.end());
    // Reverse the entire array
    reverse(arr.begin(), arr.end());
}

void OutputOfArray(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i]<<" ";
    }
}


int main(){
    int size;
    cout <<"Enter a size of array: ";
    cin>> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int k;
    cin >> k;

    Left_Rotate_by_K(arr, k);

    OutputOfArray(arr);
}