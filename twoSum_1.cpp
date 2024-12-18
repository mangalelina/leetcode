class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            int num = target - nums[i];
            if (hash.find(num) != hash.end()) return {hash[num], i};
            hash[nums[i]] = i;
        }
        return {};
    }
};
