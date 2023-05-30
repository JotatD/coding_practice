class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> negs;
        vector<int> pos;
        vector<int> res;
        for (int a : nums){
            if (a < 0){
                negs.push_back(a);
            }
            else{
                pos.push_back(a);
            }
        }
        
        for (int i = 0; i < nums.size()/2; i++){
            res.push_back(pos[i]);
            res.push_back(negs[i]);
        }
        return  res;
    }
};