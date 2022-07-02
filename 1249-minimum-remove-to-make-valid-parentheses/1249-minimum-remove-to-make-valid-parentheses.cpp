class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> opstack;
        stack<int> pos;
        string res="";
        for(int i=0; i<s.size(); i++){
            if(s[i] == ')'){
                if(opstack.empty()){
                    continue;
                }
                else if(opstack.top() == '('){
                    opstack.pop();
                    pos.pop();
                    res += ')';
                }
            }
            else if(s[i] == '('){
                opstack.push(s[i]);
                pos.push(res.size());
                res += '(';
            }
            else{
                res += s[i];
            }
        }
        while(!pos.empty()){
            res.erase(pos.top(),1);
            pos.pop();
        }
        return res;
    }
};