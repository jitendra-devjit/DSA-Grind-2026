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

int Minimum_Size_Subarray_Sum(const vector<int>& arr, int target){
    int i=0, j=0;
    int sum = 0;
    int MinimumSize = INT_MAX; 
    int n = arr.size();
    while(j<n){
        sum += arr[j];
        j++;
    
        while(sum >= target){
            MinimumSize = min(MinimumSize, j-i);  
            sum -= arr[i];    
            i++;      
        }
    }    
    return MinimumSize == INT_MAX ? 0 : MinimumSize;
}


int main(){
    int size;
    cout<<"Enter Size of array: ";
    cin >> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int target;
    cin >> target;

    int res = Minimum_Size_Subarray_Sum(arr, target);
    cout <<"Output: " <<res;
}