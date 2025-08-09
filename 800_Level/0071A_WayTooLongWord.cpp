// Problem : A. Way Too Long Words
// Source : https://codeforces.com/problemset/problem/71/A

#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--) {
        string str;
        cin>>str;
        int n = str.length();
        if(n>10) {
            string s = str[n-n] + to_string(n-2) + str[n-1];
            cout<<s<<endl;
        } else cout<<str<<endl;
    }
    return 0;
}