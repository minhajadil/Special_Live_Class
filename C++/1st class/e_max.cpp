#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int cur_max = ar[0]; //  cur_max stores the current maximum value

    for (int i = 0; i < n; i++)
    {

        cur_max = max(cur_max, ar[i]); // update the current maximum
    }

    cout << cur_max << endl;
}