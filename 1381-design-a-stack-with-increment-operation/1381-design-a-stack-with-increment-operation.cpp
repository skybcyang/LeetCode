class CustomStack {
public:
    CustomStack(int maxSize) : maxSize(maxSize) {
        
    }
    
    void push(int x) {
        if (values.size() <= maxSize -1){
            values.push_back(x);
        }
    }
    
    int pop() {
        if(values.size()>0){
            int tmp = values[values.size()-1];
            values.pop_back();
            return tmp;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        int i = 0;
        for(auto &x : values){
            x += val;
            i++;
            if(i == k){
                break;
            }
        }
    }
    
    vector<int> values;
    int maxSize = 1;
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */