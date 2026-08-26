#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumTastiness(vector<int>& price, int k) {
        // Step 1: Sort the prices first
        sort(price.begin(), price.end());
        
        // Step 2: Binary search on answer range
        int left = 0;
        int right = price[price.size() - 1] - price[0];
        int result = 0;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // Check if tastiness 'mid' is achievable
            if (canAchieve(mid, k, price)) {
                result = mid;      // This works, try higher
                left = mid + 1;
            } else {
                right = mid - 1;   // This doesn't work, try lower
            }
        }
        
        return result;
    }
    
private:
    // Helper function: Can we pick k candies with at least 'tastiness' difference?
    bool canAchieve(int tastiness, int k, const vector<int>& price) {
        int count = 1;              // Pick the first candy
        int prevPrice = price[0];   // Track previous selected candy
        
        for (int i = 1; i < price.size(); i++) {
            // If current candy has enough difference from prev selected
            if (price[i] - prevPrice >= tastiness) {
                count++;              // Select this candy
                prevPrice = price[i]; // Update previous
                
                // Early exit: if we have enough candies
                if (count >= k) 
                    return true;
            }
        }
        
        return count >= k;
    }
};