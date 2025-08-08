// Source : https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;

int main() {
    int p, s=0;
    cin>>p;
    int arr[3];
    while(p--) {
        int count = 0;
        for(int i=0; i<3; i++) {
            cin>>arr[i];
            if(arr[i]==1) count++;
        }
        if(count >= 2) s++;
    }
    cout<<s<<endl;
    return 0;
}