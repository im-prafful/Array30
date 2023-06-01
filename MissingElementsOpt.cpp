#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>
using namespace std;

void MissingElement(const vector<int> &v)
{
    unordered_set<int> s(v.begin(), v.end());

    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());

    for (int i = mn; i <= mx; i++)
    {
        if (s.find(i) == s.end())
            cout << i << " ";
    }
}

int main(void)
{
    int n;
    cout << "Enter the humber of elements : ";
    cin >> n;
    vector<int> v(n);
    cout << "\nEnter the elements : ";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << "\nThe missing elements : \n";
    MissingElement(v);
    return 0;
}
