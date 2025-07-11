/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Cho mảng a = {1, 3, 3, 5, 7, 9}. Tìm vị trí phần tử đầu tiên ≥ 4.
    vector<int> a = {1, 3, 3, 5, 7, 9};
    auto it = lower_bound(a.begin(), a.end(), 6);

    if(it != a.end()) {
        cout << "Vị trí: " << (it - a.begin()) << ", Giá trị: " << *it << endl;
    } else {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}