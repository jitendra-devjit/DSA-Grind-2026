#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void InputOfArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

bool PairWithGivenSum(vector<int> &arr, int target)
{
    unordered_map<int, bool> mp;

    int i = 0, j = arr.size() - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == target)
        {
            return true;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return false;
}

void OutputOfArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter a size: ";
    cin >> size;

    vector<int> arr(size);

    InputOfArray(arr);

    int target;
    cin >> target;

    bool res = PairWithGivenSum(arr, target);
    if(res){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}