/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
// Sắp xếp theo trị tuyệt đối tăng dần

    bool cmp(int a, int b) {
        return abs(a) < abs(b);
    }

int main() {
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int x : a) {
        cout << x << ' ';
    }
    return 0;
 
}

   