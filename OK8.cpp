/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
//Nhập n số nguyên, sắp xếp tăng dần, sau đó đảo ngược mảng và in ra.

int main()
{

    int n;
    cin >> n;
    
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    
    for(int x : a) cout << x << ' ';

  
    return 0;
}