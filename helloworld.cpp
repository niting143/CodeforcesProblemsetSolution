#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str = to_string(n);
    int flag = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != 52 && str[i] != 55)
        {
            flag = 0;
            break;
        }
    }
    int flag1 = 0;
    int arr[] = {4,7,74,44,77,444,777, 47,447,774};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        if (n % arr[i] == 0)
        {
            flag1 = 1;
        }
    }

    if (flag == 1 || flag1 == 1)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
}