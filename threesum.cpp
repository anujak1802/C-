#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    bool ans = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int h = n - 1;
        while (l < h)
        {
            int curr = a[i] + a[l] + a[h];
            if (curr == target)
            {
                ans = true;
            }
            if (curr < target)
            {
                l++;
            }
            else
            {
                h--;
            }
        }
    }
    if (ans)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}