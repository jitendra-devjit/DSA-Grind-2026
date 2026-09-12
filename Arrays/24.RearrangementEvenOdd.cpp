#include<iostream>
#include<vector>
using namespace std;

void InputOfArray(vector<int> &arr, int n){
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void RearrangementArray(vector<int> &arr){
    int i = 0;
    int j = arr.size()-1;
    while(i < j){
        if(arr[i] % 2 != 0 && arr[j] % 2 == 0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if(arr[i] % 2 == 0){
            i++;
        }
        else if(arr[j] % 2 != 0){
            j--;
        }
    }
}

void OutputOfArray(vector<int> &arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int size;
    cout<<"Enter a size: ";
    cin>> size;

    vector<int> arr(size);
    
    InputOfArray(arr, size);

    RearrangementArray(arr);

    OutputOfArray(arr, size);
}