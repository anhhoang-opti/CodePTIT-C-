/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i  = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    for(int x : a) {
        cout << x << ' ';
    }

    return 0;
}