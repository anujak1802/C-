#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int count = 1;
        int b = 0;
        while (b <= sum)
        {
            b = count * m;
            count++;
        }
        if (b > sum)
        {
            b = count / m;
        }
        int ans = sum - b;
        cout << ans << endl;
    }
    return 0;
}