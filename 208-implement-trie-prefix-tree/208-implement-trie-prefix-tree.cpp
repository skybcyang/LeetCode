class Trie {
public:
    /** Initialize your data structure here. */
    bool end;
    vector<Trie*> chmap;
    Trie() :end(false), chmap(26,nullptr) {

    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* cur = this;
        for(auto ch: word) {
            if (cur->chmap[ch-'a'] == nullptr){
                cur->chmap[ch - 'a'] = new Trie();
            }
            cur = cur->chmap[ch - 'a'];
        }
        cur->end = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* cur = this;
        for(auto ch: word){
            if(cur->chmap[ch-'a'] == nullptr) {
                return false;
            }
            cur = cur->chmap[ch-'a'];
        }
        if(cur->end)return true;
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* cur = this;
        for(auto ch: prefix){
            if(cur->chmap[ch-'a'] == nullptr) {
                return false;
            }
            cur = cur->chmap[ch-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */