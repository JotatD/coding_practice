class Solution {
public:
    string oddString(vector<string>& words) {
        vector<int> target;
        
        if (!equal(get(words[0]), get(words[1]))){
            if (!equal(get(words[0]), get(words[2]))){
                //target = get[words[0]];
                return words[0];
            }
            else{
                return words[1];
            }
        }
        else{
            target = get(words[0]);
        }       
        for (string k: words){
            if (!equal(get(k), target)) return k;
        }
        return words[0];
    }
    
    vector<int> get(string a){
        vector<int> res;
        for (int i = 0; i < a.size()-1; i++){
            res.push_back(a[i+1]-a[i]);
        }
        return res;
    }
    
    bool equal(vector<int> a, vector<int> b){
        if (a.size() != b.size()) return 0;
        else{
            for (int i = 0; i < a.size(); i++){
                if (a[i]!=b[i]) return 0;
            }
        }
        return 1;
    }
};