#include<iostream>
#include<vector>

using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cin>> arr[i];
    }
}

void Left_Rotate_by_1(vector<int>& arr){
    int temp = arr[0];
    int n= arr.size();
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

void OutputOfArray(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i]<<" ";
    }
}


int main(){
    int size;
    cout << "Enter size of array: ";
    cin>> size;

    vector<int> arr(size);

    InputOfArray(arr);

    Left_Rotate_by_1(arr);

    OutputOfArray(arr);
}