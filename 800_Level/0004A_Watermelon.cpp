// Problem: A - Watermelon
// Source: Codeforces (https://codeforces.com/problemset/problem/4/A)
// Tags: math, implementation
// Difficulty: 800
// Description: Given weight w (1 ≤ w ≤ 100), determine if it can be split into two even,
// positive integers. Print "YES" or "NO".

#include<iostream>
using namespace std;

int main() {
    int w;
    cin>>w;
    if(w%2==0 && w>2) cout<<"YES";
    else cout<<"NO";
    return 0;
}