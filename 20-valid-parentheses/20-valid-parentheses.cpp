class Solution {
public:
    bool isValid(string s) {
        stack<char> opstack;
        for(char ch: s){
            if(ch == ']' && !opstack.empty() && opstack.top()=='['){
                opstack.pop();
            }
            else if(ch == ')' && !opstack.empty() && opstack.top()=='('){
                opstack.pop();
            }
            else if(ch == '}' && !opstack.empty() && opstack.top()=='{'){
                opstack.pop();
            }
            else{
                opstack.push(ch);
            }
        }
        return opstack.empty();
    }
};