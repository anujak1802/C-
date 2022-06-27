#include <bits/stdc++.h>
using namespace std;

int binarytodecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n = n / 10;
    }
    return ans;
}

int octaltodecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n = n / 10;
    }
    return ans;
}

int decimaltobinary(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n){
        x *= 2;
    }
    x/=2;
    while (x > 0)
    {
        int last = n / x;
        n -= last * x;
        x /= 2;
        ans = ans * 10 + last;
    }
    return ans;
}

int hexatodecimal(string n)
{
    int ans = 0;
    int x = 1;

    int s = n.length();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int decimaltoOctal(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
        x *= 8;
    x /= 8;
    while (x > 0)
    {
        int last = n / x;
        n -= last * x;
        x /= 8;
        ans = ans * 10 + last;
    }
    return ans;
}

string decimaltohexa(int n)
{
    int x = 1;
    string ans = " ";
    while (x <= n)
        x *= 16;
    x /= 16;
    while (x > 0)
    {
        int last = n / x;
        n -= last * x;
        x /= 16;
        if (last <= 9)
        {
            ans = ans + to_string(last);
        }
        else
        {
            char c = 'A' + last - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    int n,m;
    cin >> n>>m;

    cout << decimaltobinary(n) << endl;
    cout<<binarytodecimal(m)<<endl;
}