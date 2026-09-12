#include<iostream>
#include<vector>

using namespace std;


void InputOfArray(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

bool LinearSearch(const vector<int>& arr, int target){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int main(){
    int size;

    cout<<"Enter Size of Array: ";
    cin>> size;

    vector<int> arr(size);

    InputOfArray(arr, size);

    int target;
    cin >> target;

    bool res = LinearSearch(arr, target);

    if(res){
        cout << "Element Found";
    }
    else{
        cout << "Element Not Found";
    }

}