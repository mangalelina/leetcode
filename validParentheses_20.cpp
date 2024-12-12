class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> braces = { {']', '['}, {')', '('}, {'}', '{'}   };
        stack<char> stk;
        for (char c: s) {
            if (braces.find(c) != braces.end()) {
                if (stk.empty()) return false;
                else {
                    if (stk.top() != braces[c]) return false;
                    else {
                        stk.pop(); 
                    }
                }
            }
            else stk.push(c);
        }

        return stk.empty();























        

        // stack<char> bracket;

        // for (int i = 0; i < s.size(); i++) {
        //     char b = s[i];
        //     if (b == '(' || b == '{' || b == '[') {

        //         bracket.push(b); 
        //     }
        //     else {
        //         if (bracket.empty()) {
        //             return false; 
        //         }


        //         char temp = bracket.top();
        //         if (b == ')' && temp == '(') {
        //             bracket.pop();
        //         }
        //         else if (b == ']' && temp == '[') {
        //             bracket.pop();
        //         }
        //         else if (b == '}' && temp == '{') {
        //             bracket.pop();
        //         }
        //         else return false; 
        //     }
            



        // }
        // if (bracket.empty()) {
        //     return true; 
        // }
        // else {
        //     return false; 
        // }

    }

        
    
};
