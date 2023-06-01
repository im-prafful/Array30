#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter The number of elements : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx_sum = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > mx_sum)
        {
            mx_sum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "\nThe maximum sum is : " << mx_sum;
    return 0;
}