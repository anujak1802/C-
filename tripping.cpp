#include <bits/stdc++.h>
using namespace std;

int rainwater(vector<int> a)
{
    stack<int> st;
    int ans = 0, n = a.size();
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] < a[i])
        {
            int curr = st.top();
            st.pop();
            if (st.empty())
            {
                break;
            }
            int diff = i - st.top() - 1;
            ans += (min(a[st.top()], a[i]) - a[curr]) * diff;
        }
        st.push(i);
    }
    return ans;
}

int main()
{
    vector<int> a = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << rainwater(a) << endl;
    return 0;
}