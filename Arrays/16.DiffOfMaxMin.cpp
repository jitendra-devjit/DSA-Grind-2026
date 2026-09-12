#include<iostream>
#include<vector>

using namespace std;


void InputOfArray(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}


int diffOfMaxInMin(const vector<int>& arr){

    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0; i < arr.size(); i++){

        if(max < arr[i])
            max = arr[i];

        if(min > arr[i])
            min = arr[i];
    }

    return max - min;
}


int main(){
    int size;

    cout<<"Enter Size of Array: ";
    cin>> size;

    vector<int> arr(size);

    InputOfArray(arr, size);

    int result = diffOfMaxInMin(arr);
    cout << "Result :" << result;

}