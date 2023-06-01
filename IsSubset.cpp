#include <bits/stdc++.h>
using namespace std;

bool isSubset(int a[], int n, int b[], int m)
{
    map<int, int> fr;
    for (int i = 0; i < n; i++)
        fr[a[i]]++;
    for (int i = 0; i < m; i++)
    {
        if (fr[b[i]] > 0)
            fr[b[i]]--;
        else
            return false;
    }
    return true;
}

int main(void)
{
    int n;
    cout << "Enter the number of element in 1st array : ";
    cin >> n;
    int a[n];
    cout << "\nEnter the elements in 1st array : \n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cout << "\nEnter the number of elements in 2nd array : ";
    cin >> m;
    int b[m];
    cout << "\nEnter the elements in 2nd array : \n";
    for (int i = 0; i < m; i++)
        cin >> b[m];
    if (!isSubset(a, n, b, m))
        cout << "\n2nd Array is a subset of 1st Array";
    else
        cout << "\nArray 2 is not a subset";
    return 0;
}