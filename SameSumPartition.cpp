#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> &v, int sum)
{
    int n = v.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (v[i - 1] <= j)
                dp[i][j] = dp[i][j] || dp[i - 1][j - v[i - 1]];
        }
    }
    return dp[n][sum];
}

bool canPartition(int n, const vector<int> &v)
{
    int sum = 0;
    for (auto &i : v)
        sum += i;
    if (sum % 2 != 0)
        return false;
    return isSubsetSum(v, sum / 2);
}

int main(void)
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector<int> v(n);
    cout << "\nEnter the elements : \n";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (canPartition(n, v))
        cout << "Yes both subset have equal sum";
    else
        cout << "No its not possible";
    return 0;
}