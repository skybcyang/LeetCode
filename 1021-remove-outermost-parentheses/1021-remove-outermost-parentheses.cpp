class Solution {
public:
    string removeOuterParentheses(string S) {
        string res = "";
        stack<int> s;
        for(auto ch : S){
            if(ch == ')' && s.top() == '('){
                s.pop();
            }
            if(!s.empty()){
                res += ch;
            }
            if(ch == '('){
                s.push(ch);
            }
        }
        return res;
    }
};