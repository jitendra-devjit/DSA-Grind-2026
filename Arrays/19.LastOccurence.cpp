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

int LastOccurrence(const vector<int> &arr, int target)
{
    int n = arr.size() - 1;
    for (int i = n; i >= 0; i--)
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

    int res = LastOccurrence(arr, target);

    if (res != -1)
    {
        cout << "Last Occurrence = Index " << res;
    }
    else
    {
        cout << "Element Not Found";
    }
}