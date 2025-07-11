/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
//Cho a = {1, 5, 5, 5, 7, 8}, tìm số phần tử ≤ 5.

vector<int> a = {1, 5, 5, 5, 7, 8};
auto it = upper_bound(a.begin(), a.end(), 5);
cout << "So phan tu <= x la: " << (it - a.begin()) << endl;

    return 0;
}