class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> matching_bracket = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        
        for (char& ch : s) {
            // If the character is one of the closing brackets
            if (matching_bracket.count(ch)) {
                // Check if the stack is not empty and the top of the stack is the corresponding opening bracket
                if (!stack.empty() && stack.top() == matching_bracket[ch]) {
                    stack.pop();  // valid pair found, so pop the top of the stack
                } else {
                    return false;  // invalid bracket sequence
                }
            } else {
                // It's an opening bracket, push it onto the stack
                stack.push(ch);
            }
        }
        
        // If the stack is empty, all opening brackets had matching closing brackets in correct order
        return stack.empty();
    }
};
