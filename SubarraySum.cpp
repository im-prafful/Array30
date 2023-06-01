#include <bits/stdc++.h>
using namespace std;

vector<int> SubarraySum(vector<int> v, int target)
{
    int sum = 0;
    vector<int> result;
    unordered_map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        if (sum == target)
        {
            result = vector<int>(v.begin(), v.begin() + i + 1);
            break;
        }
        if (m.find(sum - target) != m.end())
        {
            int indx = m[sum - target] + 1;
            result = vector<int>(v.begin() + indx, v.begin() + i + 1);
            break;
        }
        m[sum] = i;
    }
    return result;
}

int main(void)
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "\nEnter the elements : ";
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int k;
    cout << "\nEnter the target sum : ";
    cin >> k;
    vector<int> subarray = SubarraySum(v, k);
    if (!subarray.empty())
    {
        cout << "\nThe subarray resulting in sum " << k << " is : \n";
        for (auto &i : subarray)
            cout << i << " ";
    }
    else
        cout << "\nNo subarray exists for which sum = " << k;
    return 0;
}