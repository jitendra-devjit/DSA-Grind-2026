#include<iostream>
#include<vector>
using namespace std;

void InputOfArray(vector<int> &arr, int n){
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void MoveZeroEnd(vector<int> &arr){
    int i = 0;
    int j = 0;
    while(i < arr.size()){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
        i++;
    }
}

int main(){
    int size;
    cout<<"Enter a size: ";
    cin>> size;

    vector<int> arr(size);
    
    InputOfArray(arr, size);

    MoveZeroEnd(arr);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}