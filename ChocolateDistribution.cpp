#include <bits/stdc++.h>
using namespace std;

int Chocolate(int arr[], int n, int k)
{
    if (n == 0 || k == 0)
        return 0;
    if (n < k)
        return -1;
    sort(arr, arr + n);
    int d = arr[k - 1] - arr[0];
    for (int i = 0; i + k - 1 < n; i++)
        d = min(d, (arr[i + k - 1] - arr[i]));
    return d;
}

int main(void)
{
    int n;
    cout << "Enter the number of packets : ";
    cin >> n;
    int a[n];
    cout << "\nEnter the number of chocolate in each packet : \n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cout << "\nEnter the number of childern : ";
    cin >> k;
    cout << "\nThe minimum difference between max & min choco packet = " << Chocolate(a, n, k);
    return 0;
}

// Time Complexity : O(n*log(n))