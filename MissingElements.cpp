#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter the humber of elements : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d = arr[0];
    cout << "\nThe missing elements : ";
    bool b = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != d)
        {
            b = true;
            while (d < arr[i] - i)
            {
                cout << i + d << " ";
                d++;
            }
        }
    }
    if (b == false)
    {
        cout << "None";
    }
    return 0;
}