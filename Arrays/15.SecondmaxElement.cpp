#include<iostream>
#include<vector>

using namespace std;


void InputOfArray(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}


int maxElement(vector<int>& arr){
    int n = arr.size();
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i=0; i<n; i++){

        if(max < arr[i]){
            secondMax = max;
            max = arr[i];
        }
        else if(secondMax < arr[i] && max != arr[i] ){
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int minElement(vector<int>& arr){
    int n = arr.size();
    int min = INT_MAX;
    int secondMin = INT_MAX;
    for(int i=0; i<n; i++){
        if(min > arr[i]){
            secondMin = min;
            min = arr[i];
        }
        else if(secondMin > arr[i] && min != arr[i]){
            secondMin = arr[i];
        }
    }
    return secondMin;
}


int main(){
    int size;

    cout<<"Enter Size of Array: ";
    cin>> size;

    vector<int> arr(size);

    InputOfArray(arr, size);

    int Maxresult = maxElement(arr);
    cout << "Result :" << Maxresult;

    cout << endl;

    int Minresult = minElement(arr);
    cout << "Result :" << Minresult;
}