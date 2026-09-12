#include<iostream>
#include<vector>
using namespace std;

void InputOfArray(vector<int> &arr, int n){
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void MoveAllNegativeElementsToTheBeginning(vector<int> &arr){
    int i = 0;
    int j = arr.size() - 1;

    while(i <= j){

        if(arr[i] < 0){
            i++;
        }
        else if(arr[j] >= 0){
            j--;
        }
        else{
            swap(arr[i], arr[j]);
            i++;
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

    MoveAllNegativeElementsToTheBeginning(arr);

    OutputOfArray(arr, size);
}