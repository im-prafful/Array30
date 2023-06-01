#include <bits/stdc++.h>
using namespace std;

int MaxSumPath(int a[], int n, int b[], int m)
{
    int i = 0, j = 0, sum1 = 0, sum2 = 0, result = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            sum1 += a[i++];
        else if (a[i] > b[j])
            sum2 += b[j++];
        else
        {
            result += max(sum1, sum2) + a[i];
            i++, j++;
            sum1 = 0, sum2 = 0;
        }
    }
    while (i < n)
    {
        sum1 += a[i];
        i++;
    }
    while (j < m)
    {
        sum2 += b[j];
        j++;
    }
    result += max(sum1, sum2);
    return result;
}

int main(void)
{
    int n;
    cout << "Enter the number of elemnts in 1st array : ";
    cin >> n;
    int a[n];
    cout << "\nEnter the elements of 1st array : \n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cout << "\nEnter the number of elemnts in 2nd array : ";
    cin >> m;
    int b[m];
    cout << "\nEnter the elements of 2nd array : \n";
    for (int i = 0; i < m; i++)
        cin >> b[i];
    cout << "\nThe Maximum cost to traverse both arrays is : " << MaxSumPath(a, n, b, m);
    return 0;
}