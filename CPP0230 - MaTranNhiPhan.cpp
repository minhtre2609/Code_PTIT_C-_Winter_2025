#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int M[1000][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> M[i][j];
        }
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        int ones = 0, zeros = 0;
        for (int j = 0; j < 3; j++) {
            if (M[i][j] == 1) ones++;
            else zeros++;
        }
        if (ones > zeros) count++;
    }
    
    cout << count << "\n";
    return 0;
}

