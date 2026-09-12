#include<iostream>
#include<vector>

using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cin>> arr[i];
    }
}

void Right_Rotate_by_1(vector<int>& arr){
    int n= arr.size();
    int temp = arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
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

    Right_Rotate_by_1(arr);

    OutputOfArray(arr);
}