#include <bits/stdc++.h>
using namespace std;

int coinchange(int n, vector<int> &v, int sum, vector<vector<int>> &dp)
{
    if (sum == 0)
        return dp[n][sum] = 1;
    if (n == 0)
        return 0;
    if (dp[n][sum] != -1)
        return dp[n][sum];
    if (v[n - 1] <= sum)
        return dp[n][sum] = coinchange(n, v, sum - v[n - 1], dp) + coinchange(n - 1, v, sum, dp);
    else
        return dp[n][sum] = coinchange(n - 1, v, sum, dp);
}

int32_t main()
{
    int n;
    cout << "Enter the number of coins : ";
    cin >> n;
    vector<int> v(n);
    cout << "\nEnter the value of each coin : \n";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int sum;
    cout << "\nEnter the sum : ";
    cin >> sum;
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
    cout << "\nTotal number of ways to make sum is : " << coinchange(n, v, sum, dp) << endl;
}
