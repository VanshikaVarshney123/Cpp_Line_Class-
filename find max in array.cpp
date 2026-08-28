#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        // Find the maximum element in the array
        int tallest = *max_element(A.begin(), A.end());
        cout << tallest << endl;
    }
    return 0;
}