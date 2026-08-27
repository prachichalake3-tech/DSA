#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    int k = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << k;
            if (j != i) cout << " "; 
            k++;
        }
        cout << endl;
    }

    return 0;
}