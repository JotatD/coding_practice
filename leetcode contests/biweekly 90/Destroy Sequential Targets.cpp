class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> modulos;
        int maxi = -1;
        int result;
        for (int i = nums.size()-1; i >= 0; --i){
            int mod = nums[i]%space;
            modulos[mod]++;
            if (modulos[mod] >= maxi){
                maxi = modulos[mod];
                result = nums[i];
           }
        }
        return result;
    }
};