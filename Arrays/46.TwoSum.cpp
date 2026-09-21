#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void InputOfArray(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }
}

vector<int> TwoSum(vector<int>& arr, int target){
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
        int need = target - arr[i];
        if (mp.find(need) != mp.end()) {
            return {mp[need], i};
        }
        mp[arr[i]] = i;
    }

    return {};
}

void OutputOfArray(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int size;
    cout<<"Enter a size: ";
    cin>> size;

    vector<int> arr(size);
    
    InputOfArray(arr);

    int target;
    cin>> target;

    vector<int> res = TwoSum(arr, target);
    OutputOfArray(res);

    
}