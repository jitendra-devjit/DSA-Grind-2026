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

void SubarrayWithGivenSum(const vector<int>& arr, int target){
    int sum = 0;
    int i = 0;
    int j = 0; 
    while(j < arr.size()){
        
        if(sum < target){
            sum = sum + arr[j];
            j++;
        }else if(sum > target){
            sum = sum - arr[i];
            i++;
        }else if(sum == target){
            for(int k = i; k < j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
            sum = sum - arr[i];
            i++;
        }
    }
   
}

int main(){
    int size;
    cout<<"Enter Size of array: ";
    cin >> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int target;
    cin >> target;

    SubarrayWithGivenSum(arr, target);
}

