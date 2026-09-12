#include<iostream>
#include<vector>
#include<unordered_map>
#include<math.h>

using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i < arr.size(); i++){
        cin>> arr[i];
    }
}

void Find_Element_With_Maximum_Frequency(const vector<int>& arr){
    unordered_map<int, int> freq;
    int maxFreq = 0;

    for(int i=0; i<arr.size(); i++){
       freq[arr[i]]++; 
    }
    for(auto x : freq){
        if(x.second > maxFreq){
            maxFreq = x.second;
        }
    }
    for(auto x : freq){
        if(x.second == maxFreq){
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

    Find_Element_With_Maximum_Frequency(arr);
}