#include<iostream>
#include<vector>
using namespace std;

void createArray(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void printEvenNumbers(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            cout<<arr[i]<<" ";
        }
    }
}

void printOddNumbers(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        if(i % 2 != 0){
            cout<<arr[i]<<" ";
        }
    }
}
    
void printAlternateIndices(vector<int> &arr, int n){
    for(int i = 0; i<n; i+=2){
        cout<< arr[i] <<" ";
    }
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    vector<int> arr(size);

    cout<<"Enter input in array: ";
    createArray(arr, size);

    printEvenNumbers(arr, size);

    cout << endl;

    printOddNumbers(arr, size);

    cout << endl;

    printAlternateIndices(arr, size);
}