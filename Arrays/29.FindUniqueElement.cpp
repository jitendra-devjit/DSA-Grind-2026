#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i < arr.size(); i++){
        cin>> arr[i];
    }
}

void FindUniqueElement(const vector<int>& arr){
    unordered_map<int, int> freq;

    for(int i=0; i<arr.size(); i++){
       freq[arr[i]]++; 
    }
    for(auto x : freq){
        if(x.second == 1){
            cout<< x.first << endl;
        }
    }
}

void OutputOfArray(vector<int>& arr){
    for(int i=0; i < arr.size(); i++){
        cout<< arr[i];
    }
}

int main(){
    int size;
    cout<<"Enter Size of array: ";
    cin >> size;

    vector<int> arr(size);

    InputOfArray(arr);

    FindUniqueElement(arr);
}