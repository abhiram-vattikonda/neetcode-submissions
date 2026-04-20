class Solution {
public:
    bool isValid(string s) {
        // if(s.size() % 2 == 1) return false;
        vector<char> stack;

        for(char c: s)
        {
            if (c == '(' ||  c == '[' || c == '{')
            {
                stack.push_back(c);
            }

            else
            {
                if (stack.empty()) return false;
                if ((stack.back() == '(' && c != ')') || 
                    (stack.back() == '{' && c != '}') ||
                    (stack.back() == '[' && c != ']') ) 
                        return false;

                stack.pop_back();
            }

        }

        if (stack.empty())
            return true;
        else
            return false;
    }
};
