// the basic approach - use stack to check if the order is correct
class Solution {
public:
    bool isValid(string s) {
        int size = s.size();
        stack<char> stk;
        for(int i=0;i<size;i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                stk.push(s[i]);
            }
            else{
                if(stk.empty() || (stk.top()=='(' and s[i]!=')') || (stk.top()=='{' and s[i]!='}') || (stk.top()=='[' and s[i]!=']')) 
                    return false;
                stk.pop();
            }
        }
        return stk.empty();  // To check if no unbalanced opening brackets remain or not
    }
};