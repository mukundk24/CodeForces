#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == temp)
            {
                cout << j + 1 << " ";
            }
        }
        temp++;
    }
    return 0;
}