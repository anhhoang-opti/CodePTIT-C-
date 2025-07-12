/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int chan(int n) {
    if (n == 0) return 1; 
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) count++;
        n /= 10;
    }
    return count;
}

// Hàm so sánh cho sort
bool cmp1(int a, int b) {
    int chan_a = chan(a);
    int chan_b = chan(b);

    if (chan_a != chan_b)
        return chan_a < chan_b;
    return a < b;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), cmp1);

    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


  