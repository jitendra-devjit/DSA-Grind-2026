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

int FirstOccurrence(const vector<int> &arr, int target)
{
    int n = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
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

    int res = FirstOccurrence(arr, target);

    if (res != -1)
    {
        cout << "First Occurrence = Index " << res;
    }
    else
    {
        cout << "Element Not Found";
    }
}