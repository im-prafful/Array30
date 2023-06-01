#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, h = n - 1;
    while (h > l)
    {
        int temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
        l++, h--;
    }
    cout << "\nThe reverse is : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}