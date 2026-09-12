#include <iostream>
#include<vector>
using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
}

int DiffOfSumOfEvenSumOfOdd(vector<int>& arr){
    int evenSum = 0;
    int oddSum = 0;
    int difference = 0;

for(int i = 0; i < arr.size(); i++){

    if(arr[i] % 2 == 0){
        evenSum += arr[i];
    }
    else{
        oddSum += arr[i];
    }
}

    difference = abs(evenSum - oddSum);
    return difference;
}



int main(){
    int size;
    cout <<"enter a number: ";
    cin>> size;
    

    vector<int> arr(size);
    
    InputOfArray(arr);

    int res = DiffOfSumOfEvenSumOfOdd(arr);
    cout << "The difference between the sum of even and odd numbers is: " << res << endl;
}