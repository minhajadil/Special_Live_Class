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

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {

                cout << ar[i] << " " << ar[j] << " " << ar[k] << endl;
            }
        }
    }
}