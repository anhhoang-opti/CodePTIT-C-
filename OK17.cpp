/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
//Đếm số lần xuất hiện của số 3 trong a = {2, 3, 3, 3, 3, 8, 9}

vector<int> a = {2, 3, 3, 3, 3, 8, 9};
int count = upper_bound(a.begin(), a.end(), 3) - lower_bound(a.begin(), a.end(), 3);
cout << "Tan suat xuat hien cua so 3 la: " << count << endl;

    return 0;
}