#include<iostream>
#include<vector>
using namespace std;

void createArray(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void printReverseArray(vector<int> &arr, int n){
    int i = 0; int j = n-1; 
    int temp;
    while(i<j){

        // swap(arr[i], arr[j]);

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    vector<int> arr(size);

    cout<<"Enter input in array: ";
    createArray(arr, size);
    printReverseArray(arr, size);
}