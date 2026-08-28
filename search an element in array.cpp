#include <vector>
#include <string>

using namespace std;

string solve(int N, int X, const vector<int>& A) {
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            return "YES";
        }
    }
    return "NO";
}