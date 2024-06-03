#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int ar[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> ar[i];
    // }

    // // ascending

    // sort(ar, ar + n); // powerful sort

    // for (int i = 0; i < n; i++)
    // {
    //     cout << ar[i] << " ";
    // }

    // cout << endl;

    // // descending

    // sort(ar, ar + n, greater<int>());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << ar[i] << " ";
    // }

    // cout << endl;

    char str[1000];

    cin.getline(str, 1000);

    sort(str, str + strlen(str));

    cout << str << endl;
    cout << endl;
}