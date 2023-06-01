#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector<int> v(n);
    cout << "\nEnter the elements : ";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (v[l] < 0 && v[r] < 0)
            l++;
        else if (v[l] >= 0 && v[r] < 0)
        {
            swap(v[l], v[r]);
            l++, r--;
        }
        else if (v[l] >= 0 && v[r] >= 0)
            r--;
        else
            l++, r--;
    }
    cout << "\nModified array is : \n";
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}