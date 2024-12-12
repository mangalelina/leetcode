class Solution {
public:
    string simplifyPath(string path) {

        stack <string> s;

        stringstream ss(path);
        string x;
        while (getline(ss, x, '/')) {

            if (x == "..") {
                if (!s.empty()) s.pop();
            }
            else if (x != "." && !x.empty()) {
                s.push(x);
            }
        }

        string res;
        while (!s.empty()) {
            res = "/" + s.top() + res;
            s.pop();
        }
        if (res.empty()) return "/";
        else return res;
        
    }
};
