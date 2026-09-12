#include <iostream>
#include <vector>

using namespace std;

void InputOfArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int CountOccurrences(const vector<int> &arr, int target)
{
    int count = 0;

    for (int i = 0; i < arr.size(); i++){
        if(arr[i] == target) count++;
    }
    return count;
}

int main()
{
    int size;

    cout << "Enter Size of Array: ";
    cin >> size;

    vector<int> arr(size);

    InputOfArray(arr, size);

    int target;
    cin >> target;

    int res = CountOccurrences(arr, target);
    cout << "Count = " << res;
    
   
}