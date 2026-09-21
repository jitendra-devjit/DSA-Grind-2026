#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void InputOfArray(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }
}

bool PairWithGivenDifference(vector<int>& arr, int k){
    unordered_map<int, bool> mp;

    for (int i = 0; i < arr.size(); i++) {
        int x = arr[i];
        if (mp.find(x+k) != mp.end()) {
            return true;
        }
        if (mp.find(x-k) != mp.end()) {
            return true;
        }
        mp[x] = true;
    }

    return false;
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

    bool res = PairWithGivenDifference(arr, target);
    cout << res;

    
}