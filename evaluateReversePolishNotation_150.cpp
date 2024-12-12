class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        // create a lambda function 
        unordered_map<string, function<int(int, int)>> ops = {
            {"+", [](int a, int b) {return a+b;}}, 
            {"-", [](int a, int b) {return a-b;}}, 
            {"*", [](int a, int b) {return a*b;}}, 
            {"/", [](int a, int b) {return a/b;}} 
        };

        stack<int> n;
        for (auto t: tokens) {
            if (ops.find(t) == ops.end()) {
                n.push(stoi(t));
            }
            else {
                int b = n.top();
                n.pop();
                int a = n.top();
                n.pop();
                function<int(int, int)> oper = ops[t];
                n.push(oper(a, b)); 

            }
        }
        return n.top();
        
    }
};
