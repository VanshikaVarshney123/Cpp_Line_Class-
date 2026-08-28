#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int firstMax = INT_MIN;
        int secondMax = INT_MIN;
        
        /* By initializing both to INT_MIN (the smallest possible integer in C++), we ensure that any valid array element (which is 
≥1 according to the constraints) will be strictly greater than INT_MIN. This allows our if and else if conditions to correctly capture the top two distinct values as we loop through the array. */ 


        // Find the two largest distinct elements
        for (int i = 0; i < n; i++) {
            if (a[i] > firstMax) {
                secondMax = firstMax;
                firstMax = a[i];
            } else if (a[i] > secondMax && a[i] != firstMax) {
                secondMax = a[i];
            }
        }

        int maxSum = firstMax + secondMax;
        cout << maxSum << "\n";
    }
    return 0;
}

