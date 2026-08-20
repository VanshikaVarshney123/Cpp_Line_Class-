#include <vector>
#include <string>
#include <algorithm>  // for min()
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        int minLen = strs[0].length();
        for (int i = 1; i < strs.size(); i++) {
            minLen = min(minLen, (int)strs[i].length());
        }
        
        string result = "";
        for (int i = 0; i < minLen; i++) {
            char currentChar = strs[0][i];
            
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != currentChar) {
                    return result;
                }
            }
            
            result += currentChar;
        }
        
        return result;
    }
};