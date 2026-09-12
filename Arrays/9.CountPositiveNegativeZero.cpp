#include<iostream>
#include <vector>
using namespace std;

void InputOfArray(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
}


void Count_Positive_Negative_and_Zero(const vector<int>& arr){
    int Positive = 0, Negative = 0, Zero = 0;
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            Positive++;
        }
        else if(arr[i] < 0){
            Negative++;
        }
        else{
            Zero++;
        }
    }
    cout << "Positive = " << Positive << endl;
    cout << "Negative = " << Negative << endl;
    cout << "Zero = " << Zero << endl;
}



int main(){
    int size;

    cout<<"Enter Size of Array: ";
    cin>> size;

    vector<int> arr(size);

    InputOfArray(arr);

    Count_Positive_Negative_and_Zero(arr);
    
}