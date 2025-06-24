/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Đề bài: Nhập vào danh sách gồm n học sinh,
       mỗi học sinh có tên (string) và điểm (int)
       Lưu dưới dạng vector<pair<string, int>>.
       In ra danh sách học sinh có điểm >= 5 */
    
    //Nhập vào số học sinh
    int n;
    cin >> n;
    
    //Tạo pair
    
    vector<pair<string, int>> students(n);
    for(int i = 0; i < n; i++) {
        cin >> students[i].first >> students[i].second;
    }
    for(auto &p : students) {
        if(p.second >= 5) {
            cout << p.first << ' ' << p.second << endl;
        }
    }
    return 0;
}