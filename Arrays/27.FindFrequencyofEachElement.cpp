#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

void InputOfArray(vector<int> &arr, int n){
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void FindFrequencyofEachElement(vector<int> &arr){
    unordered_map<int, int> freq;

    for(int i = 0; i < arr.size(); i++){
        freq[arr[i]]++;
    }
    for(auto x : freq){
        cout << x.first << " → " << x.second << endl;
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

    FindFrequencyofEachElement(arr);
}

