/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
// Bài 8: Sắp xếp ký tự trong chuỗi

int main()
{
    string s;
    cin >> s;
    
    sort(s.begin(), s.end());
    cout << s;
    return 0;
}