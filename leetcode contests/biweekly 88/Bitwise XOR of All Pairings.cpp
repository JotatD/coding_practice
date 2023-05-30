class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size()%2 == 0 && nums2.size()%2 == 0){
            return 0;
        }
        else if (nums1.size()%2 == 1 && nums2.size()%2 == 0){
            return xoring(nums2);
        }
        else if (nums1.size()%2 == 0 && nums2.size()%2 == 1){
            return xoring(nums1);
        }
        else return xoring(nums1) ^ xoring(nums2);
    }
    
    int xoring(vector<int> t){
        int result = 0;
        for (int a : t){
            result ^= a;
        }
        return result;
    }
};