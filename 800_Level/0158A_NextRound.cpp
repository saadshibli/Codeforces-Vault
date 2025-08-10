// Problem: Next Round
// Source: https://codeforces.com/problemset/problem/158/A

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