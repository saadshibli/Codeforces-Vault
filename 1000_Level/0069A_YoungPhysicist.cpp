// source : "https://codeforces.com/problemset/problem/69/A"

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sX=0, sY=0, sZ=0;
    for(int i=0; i<n; i++) {
        int x, y, z;
        cin>>x>>y>>z;
        sX+=x;
        sY+=y;
        sZ+=z;
    }
    if(sX==0 && sY==0 && sZ==0) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}