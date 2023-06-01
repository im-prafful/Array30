#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter the number of schedule : ";
    cin >> n;
    int a[n], d[n];
    cout << "\nEnter the arrival timings : \n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "\nEnter the departure timings : \n";
    for (int i = 0; i < n; i++)
        cin >> d[i];
    int x = d[0];
    for (int i = 1; i < n; i++)
    {
        x = max(x, d[i]);
    }
    vector<int> v(x + 2, 0);
    for (int i = 0; i < n; i++)
    {
        v[a[i]]++;
        v[d[i] + 1]--;
    }
    int count = 0, mx = 0;
    for (int i = 0; i < x + 1; i++)
    {
        count += v[i];
        mx = max(mx, count);
    }
    cout << "The minimum platform needed is : " << mx;
    return 0;
}