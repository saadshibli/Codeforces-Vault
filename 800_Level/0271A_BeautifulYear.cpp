// source : "https://codeforces.com/problemset/problem/271/A"

#include<iostream>
#include<vector>
using namespace std;

bool checkDistinctYear(int year) {
    vector<bool> seen(10, false);
    while(year>0) {
        int digit = year%10;
        if(seen[digit]) return false;
        seen[digit] = true;
        year/=10;
    }
    return true;
}

int main() {
    int y;
    cin>>y;
    y++;

    while(true) {
        if(checkDistinctYear(y)) {
            cout<<y<<endl;
            break;
        }
        y++;
    }

    return 0;
}