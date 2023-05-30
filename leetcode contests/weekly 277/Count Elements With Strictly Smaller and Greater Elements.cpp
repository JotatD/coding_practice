class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0;
        for (int i = 0 ; i < nums.size(); i++){
            if (check(nums, nums[i])) count++;
        }
        return count;
    }
    
    bool check(vector<int>& nums, int a){
        bool l = 0, g = 0;
        for (int k:nums){
            if (k < a){
                l = 1;
            }
            if (k > a){
                g = 1;
            }
        }
        return (l && g);
    }
};