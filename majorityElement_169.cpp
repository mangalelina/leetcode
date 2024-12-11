class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums.size() / 2;
        unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }

        for (auto a: count) {
            if (a.second > maj) return a.first;
        }
        
        return -1;
    }
};
