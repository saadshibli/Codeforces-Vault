// Source : https://codeforces.com/contest/2133/problem/A

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> t(n);
        for(int i=0; i<n; i++) cin>>t[i];
        sort(t.begin(), t.end());
        bool satisfactory = false;
        for(int i=1; i<n; i++) {
            if(t[i-1]==t[i]) {
                satisfactory = true;
                break;
            }
        }
        satisfactory?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }
    return 0;
}