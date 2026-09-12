#include<iostream>
#include<vector>

using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        cin>>arr[i];
    }
}

void Output(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int LongestSubarrayWithGivenSum(const vector<int>& arr, int target){
    int i=0, j=0;
    int sum = 0;
    int LongestSubarray = 0;
    int n = arr.size();
    while(j<n){
        if(sum < target){
            sum += arr[j];
            j++;
        }
        else if(sum > target){
            sum -= arr[i];
            i++;
        }else{
            LongestSubarray = max(LongestSubarray, j-i);
            sum -= arr[i];
            i++;
        }
    }
    return LongestSubarray;
}


int main(){
    int size;
    cout<<"Enter Size of array: ";
    cin >> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int target;
    cin >> target;

    int res = LongestSubarrayWithGivenSum(arr, target);
    cout << res;
}