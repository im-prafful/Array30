#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector<int> v(n);
    cout << "\nEnter the elements : \n";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int target;
    cout << "\nEnter the sum to be searched : ";
    cin >> target;
    int count = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
        int d = target - v[i];
        if (m.find(d) != m.end())
            count++;
    }
    cout << "\nThe number of pairs whose sum is " << target << " equals : " << count;
    return 0;
}