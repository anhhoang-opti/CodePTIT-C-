/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;


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
    cout << se.size() << endl;
  
   

    return 0;
}