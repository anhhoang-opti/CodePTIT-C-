/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; // Nhập số thao tác
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;  // Bổ sung dòng này để nhập thao tác x

        if (x == 1) {
            int y;
            cin >> y;
            v.push_back(y);
        } else if (x == 2 && !v.empty()) {
            v.pop_back();
        }
    }

    for (auto x : v) {
        cout << x << ' ';
    }

    return 0;
}
