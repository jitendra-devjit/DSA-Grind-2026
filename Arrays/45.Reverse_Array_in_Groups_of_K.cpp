#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
}


void ReverseInGroupsOfK(vector<int>& arr, int k) {
    int n = arr.size();

    for(int i = 0; i < n; i += k) {
        int right = min(i + k, n);

        reverse(arr.begin() + i, arr.begin() + right);
    }
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

    ReverseInGroupsOfK(arr, k);

    OutputOfArray(arr);
}