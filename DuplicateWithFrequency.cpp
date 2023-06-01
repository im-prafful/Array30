#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector<int> v(n);
    cout << "\nEnter the elements : ";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    unordered_map<int, int> m;
    for (auto &i : v)
        m[i]++;
    bool d = false;
    cout << "\nElement\t\tFrequency\n";
    for (const auto &i : m)
    {
        if (i.second > 1)
            cout << "  " << i.first << "\t\t    " << i.second << endl;
        d = true;
    }
    if (!d)
        cout << "No duplicate found";
    return 0;
}