#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr1[n], arr2[n];
        for(int i=0; i<n; i++) cin>>arr1[i];
        for(int i=0; i<n; i++) cin>>arr2[i];
        int decrease = 0;
        for(int i=0; i<n; i++) if(arr1[i]>arr2[i])  decrease += (arr1[i]-arr2[i]);
        int i = decrease + 1;
        cout<<i<<endl;
    }
    return 0;
}