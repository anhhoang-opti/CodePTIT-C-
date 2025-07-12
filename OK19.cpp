/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int le(int n) {
    if(n == 0) return 0;
    int count = 0;
    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 == 1) count++;
        n /= 10;
    }
    return count;
}
bool cmp2(int a, int b) {
    return le(a) < le(b);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    stable_sort(a.begin(), a.end(), cmp2);

    for(int num : a) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

  