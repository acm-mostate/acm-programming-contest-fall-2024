/*
Problem E: Translation
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
   string s1,s2;
   bool same = true;
 
   cin >> s1;
   cin >> s2;
   int i = 0,j = s2.size()-1;
 
   if (s1.size() != s2.size()) {
    printf("NO\n"); return 0;
   }
   while(same && i < s1.size() && j >=0)
   {
       if (s1[i] != s2[j])
       {
           same = false;
           break;
       }
       i++;
       j--;
   }
   if (same)
       printf("YES\n");
   else
       printf("NO\n");
}
