vector<int> powers ;
typedef long long ll;
class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> result;
        ll mod = 1e9 + 7;
        binary(n);
        for (int q = 0; q < queries.size(); q++){
            int a = queries[q][0];
            int b = queries[q][1];
            ll mult = 1;
            for (int i = a; i <= b; i++){
                mult = (mult * powers[i])%mod;
            }
            result.push_back(mult);
        }
        return result;
    }
    
    void binary(int n){
        vector<int> bin;
        while (n){
            bin.push_back(n%2);
            //cout << n%2 << endl;
            n/=2;
            
        }
        //reverse(bin.begin(), bin.end());
        vector<int> res;
        for (int i = 0; i < bin.size(); i++){
             if (bin[i] != 0){
                 res.push_back(pow(2, i));
                 //cout << pow(2, i) << endl;
             }
        }
        reverse(powers.begin(), powers.end());
        powers = res;
    }
    
};