#include<iostream>
#include<vector>

using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        cin>>arr[i];
    }
}

int Maximum_Number_of_Consecutive1s(vector<int>& arr){
    int n = arr.size();
    int sum = 0;
    int maxSum = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            sum++;
            maxSum = max(maxSum, sum);
        }   
        else{
            sum = 0;
        }
    }
    return maxSum;
}

int main(){
    int size;
    cout << "Enter a size of array: ";
    cin>> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int res = Maximum_Number_of_Consecutive1s(arr);
    cout << "output: " <<res;
}