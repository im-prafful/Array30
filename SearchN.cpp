#include <bits/stdc++.h>
using namespace std;

int Search(const vector<int> &v, int target)
{
    int l = 0, r = v.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] == target)
            return mid;
        else if (v[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main(void)
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector<int> v(n);
    cout << "\nEnter the number of elements : ";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int target;
    cout << "\nEnter the number to be searched : ";
    cin >> target;
    int index = Search(v, target);
    if (index != -1)
        cout << "\nElement is at " << index;
    else
        cout << "\nElement is not there in the array";
    return 0;
}