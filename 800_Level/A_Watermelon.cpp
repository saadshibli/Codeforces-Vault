// Problem: A - Watermelon
// Source: Codeforces Round #1 (https://codeforces.com/problemset/problem/4/A)
// Tags: implementation, math
// Difficulty: 800
// Description:
// One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose
// the biggest and the ripest one, in their opinion. After that the watermelon was weighed,
// and the scales showed w kilos.
//
// They want to divide the watermelon in such a way that each of the two parts weighs
// an even number of kilos, and each part has positive weight.
//
// Input:
// A single integer w (1 ≤ w ≤ 100) — the weight of the watermelon.
//
// Output:
// Print "YES" if the watermelon can be divided into two even positive weights,
// and "NO" otherwise.
#include<iostream>
using namespace std;

int main() {
    int w;
    cin>>w;
    if(w%2==0 && w>2) cout<<"YES";
    else cout<<"NO";
    return 0;
}