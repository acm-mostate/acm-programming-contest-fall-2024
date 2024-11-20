/*
Problem F: Twins
 */
#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int total = 0;
    for(int i = 0 ; i < n; i++) {cin >> a[i];total+= a[i];}
    
    sort(a.begin(), a.end());
    
    int take=0;
    int mine =0;
    for (int i =n-1 ; i >= 0 ; i--) {
        mine++;
        take += a[i];
        if (take >  total/ 2) {
            cout << mine << endl;
            return;
        }
    }

}

int main() {
    solve();
}