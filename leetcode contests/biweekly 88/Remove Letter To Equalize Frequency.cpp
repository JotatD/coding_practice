class Solution {
public:
    bool equalFrequency(string word) {
        vector<int> freq(27, 0);
        
        for (int i = 0; i < word.size(); i++){
            freq[word[i]-'a'] += 1;
        }
        sort(freq.begin(), freq.end());
        
        for (int i = 0; i < freq.size(); i++){
            if (freq[i] == 0) continue;
            else{
                freq[i]--;
                if(check(freq)) return 1;
                freq[i]++;
            }
        }
        return false;
    }
    
    void print(vector<int>& v){
        for (int a:v){
            cout << a << ' ';
        }
        cout << endl;
    }
    
    bool check(vector<int> t){
        int temp = 0;
        for (int a: t){
            if (a == 0) continue;
            else{
                if (temp == 0){
                    temp = a;
                }
                else if (temp != a) return 0;
            }
        }
        cout << "Im equal" << endl;
        return 1;
    }
};