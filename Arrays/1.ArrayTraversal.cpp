#include<iostream>
#include<vector>
using namespace std;

void CreateArray(vector<int>& arr, int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void PrintArray(const vector<int>& arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    vector<int> arr(size);

    cout<<"Enter elements of the array: ";
    CreateArray(arr, size);
    PrintArray(arr, size);
}