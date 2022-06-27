#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    int n = s.size();
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        if ( s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%')
        {
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                ans = true;
            }
            while (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/' || st.top() == '%')
            {
                st.pop();
            }
            st.pop();
        }
    }
    if (ans == true)
    {
        cout << "Redundant";
    }
    else
    {
        cout << "Non-redundant";
    }
    return 0;
}