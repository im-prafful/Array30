#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter the number of elements in 1st array : ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of 1st array : \n";
    for (int x = 0; x < n; x++)
        cin >> a[x];
    int m;
    cout << "Enter the number of elements in 2nd array : ";
    cin >> m;
    vector<int> b(m);
    cout << "\nEnter the elements of 2nd array : \n";
    for (int y = 0; y < m; y++)
        cin >> b[y];
    int i = 0, j = 0;
    vector<int> u, it;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            u.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j])
        {
            u.push_back(b[j]);
            j++;
        }
        else
        {
            u.push_back(a[i]);
            it.push_back(a[i]);
            i++, j++;
        }
    }
    while (i < n)
    {
        u.push_back(a[i]);
        i++;
    }
    while (j < m)
    {
        u.push_back(b[j]);
        j++;
    }
    cout << "\nThe union of both arrays are : \n";
    for (int k = 0; k < u.size(); k++)
        cout << u[k] << " ";
    cout << "\nThe intersection of both arrays are : \n";
    for (int k = 0; k < it.size(); k++)
        cout << it[k] << " ";
    return 0;
}