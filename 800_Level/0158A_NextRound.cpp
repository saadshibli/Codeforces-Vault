// Problem: Next Round
// Source: https://codeforces.com/problemset/problem/158/A
//
// There are n participants in a contest, each with a score (non-increasing order).
// The k-th place score is arr[k-1]. A participant advances if their score is at least the k-th place score and is positive.
//
// Input:
//   - n, k: number of participants and cutoff place
//   - n integers: scores of participants (non-increasing order)
//
// Output:
//   - Number of participants who advance to the next round.
//
// Example:
// Input:
//   8 5
//   10 9 8 7 7 7 5 5
// Output:
//   6
//
#include<iostream>
using namespace std;

int main() {
    int n, k, c=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int score = arr[k-1];
    for(int i=0; i<n; i++) {
        if(arr[i]>=score && arr[i]>0) {
            c++;
        }
    }
    cout<<c;
}