/*
Problem C: String Task 
 */
#include <iostream>
#include <string>
#include <cctype> 

//#include <bits/stdc++.h>
 
using namespace std;
 
string processString(const string& input) {
    string result;
    for (char c : input) {
        c = tolower(c); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            continue;
        }
        result += '.'; 
        result += c; 
    }
    return result;
}
 
int main() {
    string input;
    cin >> input; 
    string output = processString(input);
    cout << output << endl; 
    return 0;
}