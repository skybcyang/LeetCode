class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret_vec;
        for(int i=1; i<=n; i++){
            string ret = "";
            if (i%3==0){
                ret += "Fizz";
            }
            if (i%5==0){
                ret += "Buzz";
            }
            if (ret.size() == 0){
                ret += to_string(i);
            }
            ret_vec.push_back(ret);
        }
        return ret_vec;
    }
};