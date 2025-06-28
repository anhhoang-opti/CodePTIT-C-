/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
//Nhập mảng n số nguyên. Sắp xếp các số chẵn trước, lẻ sau, mỗi nhóm tăng dần.

int main()
{
  int n;
  cin >> n;
  vector<int> even, odd;
  
  for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if(x % 2 == 0) {
          even.push_back(x);
      }
      else {
          odd.push_back(x);
      }
      }
      sort(even.begin(), even.end());
      sort(odd.begin(), odd.begin());
      
      for(int x : even) cout << x << ' ';
      for(int x : odd) cout << x << ' ';
      return 0;
  
}