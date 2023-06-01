#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = arr[0], mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
        else if (arr[i] < mn)
            mn = arr[i];
    }
    cout << "\nThe maximum number is : " << mx
         << "\nThe minimum number is : " << mn;
    return 0;
}