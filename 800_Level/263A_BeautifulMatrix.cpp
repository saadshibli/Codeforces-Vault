// Problem : A. Beautiful Matrix
// Source : https://codeforces.com/problemset/problem/263/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size = 5;
    vector<vector<int>> mat(size, vector<int>(size));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) cin >> mat[i][j];
    }

    if (mat[2][2] == 1) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (mat[i][j] == 1) {
                // Manhattan distance formula abs(p1-2) + (p2-2)
                cout<<abs(i - 2) + abs(j - 2);
                break;
            }
        }
    }

    // //BRUTE FORCE WAY OF CALCULATING DISTANCE (Not optimized)
    // //Note : p1 and p2 are the position of '1' in matrix i.e. mat[p1][p2]
    // int count=0;
    // for(int i=0; i<5; i++) {
    //     while(p2!=2) {
    //         if(p2>2) {
    //             p2--;
    //             count++;
    //         }
    //         if(p2<2) {
    //             p2++;
    //             count++;
    //         }
    //     }
    //     while(p1!=2) {
    //         if(p1>2) {
    //             p1--;
    //             count++;
    //         }
    //         if(p1<2) {
    //             p1++;
    //             count++;
    //         }
    //     }
    // }

    return 0;
}