#include <bits/stdc++.h>
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
    int k;
    cout << "\nEnter the number by which array is to be rotated : ";
    cin >> k;
    k %= n;
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
    cout << "\nRotated array is : \n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}