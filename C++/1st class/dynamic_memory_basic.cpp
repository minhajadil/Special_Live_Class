#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // int *p = fun(n);

    // for (int i = 0; i < n; i++)
    // {

    //     cout << p[i] << endl;
    // }

    int *array_pointer = new int[n]; // dynamic array declaration

    for (int i = 0; i < n; i++)
    {
        cin >> array_pointer[i];
    }
    cout << array_pointer[3] << endl;

    cout << endl;
}