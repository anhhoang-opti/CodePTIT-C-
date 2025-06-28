/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
//Nhập n số nguyên. In ra các số theo thứ tự tăng dần, không trùng lặp.

int main()
{
    int n;
    cin >> n;
    
    set<int> se;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        se.insert(x);
    }
        for(int x : se) cout << x << ' ';
  
    return 0;
}