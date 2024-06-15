class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";  // Handle empty vector

        string prefix = strs[0];  // Initialize prefix with the first string

        // Iterate through the rest of the strings
        for (int i = 1; i < strs.size(); i++) {
            // Find the common prefix between the current prefix and the current string
            string common = "";
            for (int j = 0; j < min(prefix.length(), strs[i].length()); j++) {
                if (prefix[j] == strs[i][j]) {
                    common += prefix[j];
                } else {
                    break;
                }
            }
            prefix = common;  // Update the prefix with the common prefix
        }

        return prefix;
    }
};
