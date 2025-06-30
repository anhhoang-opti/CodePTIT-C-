/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
// Binary search basic
    
int main() {
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(binary_search(a, a+ n, 2)) {
        cout << "FOUND\n";
    }
        else {
        cout << "NOT_FOUND\n";
            
        }
        return 0;
    }


   