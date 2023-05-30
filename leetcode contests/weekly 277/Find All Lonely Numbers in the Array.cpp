class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> map;
        
        for (int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }
        
        int count = 0;
        vector<int> res;
        for (int a:nums){
            if (!map.count(a+1) && !map.count(a-1) && map[a] <= 1) res.push_back(a);
        }
        return res;
    }
};