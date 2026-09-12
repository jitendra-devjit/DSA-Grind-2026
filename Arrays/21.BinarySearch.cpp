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

int BinarySearch(const vector<int> &arr, int target)
{

    int l = 0;
    int r = arr.size() - 1;

    while (l <= r)
    {

        int mid = l + (r - l) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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

    int res = BinarySearch(arr, target);

    if (res != -1)
        cout << "Element Found at Index: " << res;
    else
        cout << "Element Not Found";
}