#include <bits/stdc++.h>
using namespace std;

int Reverse(int n)
{
    int rem = 0, rev = 0;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}

int main(void)
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "\nThe reverse is : " << Reverse(n);
    return 0;
}