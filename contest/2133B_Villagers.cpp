// Source : https://codeforces.com/contest/2133/problem/B

#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<long long> g(n);
        for(int i=0; i<n; i++) cin>>g[i];
        sort(g.begin(), g.end());
        long long ans=0;
        for(int i=n-1; i>=0; i-=2) {
            ans+=g[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}