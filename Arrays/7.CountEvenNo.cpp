#include<iostream>
#include <vector>
using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
}


int CountEvenElement(const vector<int>& arr){
    int count = 0;
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
           
            count ++;
        }
    }
    return count;
}

int main(){
    int size;

    cout<<"Enter Size of Array: ";
    cin>> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int res = CountEvenElement(arr);
    cout << "Result :" << res;

    
}