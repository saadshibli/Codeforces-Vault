#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n;
        string a,b,c;
        cin>>a;
        cin>>m;
        cin>>b;
        cin>>c;

        string fr="", bk="";
        for(int i=0; i<m; i++) {
            if(c[i]=='V') fr.push_back(b[i]);
            else bk.push_back(b[i]);
        }
        reverse(fr.begin(), fr.end());
        cout<<fr+a+bk<<endl;
    }
}