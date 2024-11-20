/*
Problem G: Advantage
 */
#include<bits/stdc++.h>
using namespace std;

void run_case(int &test_case){
  int n, max = 0, temp_index = 0, max2 = 0;
 
  scanf("%d", &n);
  vector<int> s(n);
  for(int i = 0; i < n; i++) {
    cin >> s[i];
    if (s[i] > max) {max = s[i];temp_index = i;}
  }
  for(int i = 0; i < n; i++) {
    if (s[i] > max2 && i != temp_index) {
      max2 = s[i];
    } 
  }

  for(int i = 0; i < n; i++) {
    if (max == s[i]) {
      cout << s[i] - max2 << " ";
    } else {
      cout << s[i] - max << " ";
    }
  }
  cout << endl;
}

int main(){
  int tests;
  scanf("%d", &tests);

  for(int tc = 1; tc <= tests; tc++){
    run_case(tc);
  }
  return 0;
}