#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n & 1)
    {
        cout << 4 << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << n - 1 << " " << n << endl;
        cout << n - 1 << " " << n << endl;
    }
    else
    {
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}