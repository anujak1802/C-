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

int decimaltobinary(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;
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
void binarytohexa(int num)
{
    int i, temp = 0, hexa[20], rem;
    cout << "Hexadecimal eqivalent: ";
    for (i = 0; num > 0; i++)
    {
        for (int y = 0; y < 4; y++)
        {
            rem = num % 10;
            num /= 10;
            temp += rem * pow(2, y);
        }
        hexa[i] = temp;
        temp = 0;
    }
    while (i > 0)
    {
        i--;
        if (hexa[i] > 9)
            cout << char(55 + hexa[i]);
        else
            cout << hexa[i];
    }
}

void hexatobinary(string hexdec)
{
    long int i = 0;

    while (hexdec[i])
    {

        switch (hexdec[i])
        {
        case '0':
            cout << "0000";
            break;
        case '1':
            cout << "0001";
            break;
        case '2':
            cout << "0010";
            break;
        case '3':
            cout << "0011";
            break;
        case '4':
            cout << "0100";
            break;
        case '5':
            cout << "0101";
            break;
        case '6':
            cout << "0110";
            break;
        case '7':
            cout << "0111";
            break;
        case '8':
            cout << "1000";
            break;
        case '9':
            cout << "1001";
            break;
        case 'A':
        case 'a':
            cout << "1010";
            break;
        case 'B':
        case 'b':
            cout << "1011";
            break;
        case 'C':
        case 'c':
            cout << "1100";
            break;
        case 'D':
        case 'd':
            cout << "1101";
            break;
        case 'E':
        case 'e':
            cout << "1110";
            break;
        case 'F':
        case 'f':
            cout << "1111";
            break;
        default:
            cout << "\nInvalid hexadecimal digit " << hexdec[i];
        }
        i++;
    }
}

int main()
{
    int choice;
    cout << "1) Convert binary to decimal" << endl;
    cout << "2) Convert decimal to binary" << endl;
    cout << "3) Convert hexadecimal to binary" << endl;
    cout << "4) Convert binary to hexadecimal" << endl;
    cout << "5) Convert decimal to hexadecimal" << endl;
    cout << "6) Convert hexadecimal to decimal" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int a;
        cout << "Enter binary no.: ";
        cin >> a;
        int ans = binarytodecimal(a);
        cout << "Decimal equivalent: " << ans << endl;
        break;
    }
    case 2:
    {
        int b;
        cout << "Enter decimal no.: ";
        cin >> b;
        int ans = decimaltobinary(b);
        cout << "Binary equivalent: " << ans << endl;
        break;
    }
    case 3:
    {
        string c;
        cout << "Enter hexadecimal no.: ";
        cin >> c;
        cout << "Binary equivalent: ";
        hexatobinary(c);
        cout << endl;
        break;
    }
    case 4:
    {
        int d;
        cout << "Enter binary no.: ";
        cin >> d;
        binarytohexa(d);
        cout << endl;
        break;
    }
    case 5:
    {
        int e;
        cout << "Enter decimal no.: ";
        cin >> e;
        string ans = decimaltohexa(e);
        cout << "Hexadecimal equivalent: " << ans << endl;
        break;
    }
    case 6:
    {
        string f;
        cout << "Enter hexadecimal no.: ";
        cin >> f;
        int ans = hexatodecimal(f);
        cout << "Decimal equivalent: " << ans << endl;
        break;
    }

    default:
        break;
    }
    return 0;
}