#include <bits/stdc++.h>
using namespace std;

int main()
{

    // min() function returns the minimum number

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << min(a, b) << endl; // takes two input

    cout << min({a, b, c, d}) << endl; // takes as much input as needed

    //   max() function returns the maximum number

    cout << "max: " << max(a, b) << endl;

    cout << max({a, b, c, d}) << endl;

    // swap() swaps two variables

    // int tmp = a;
    // a = b;
    // b = tmp;

    swap(c, d);

    cout << c << " " << d << endl;
}