class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0, sum = 0;
        int result = INT_MAX;

        for (right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum >= target) {
                result = min(result, right-left+1);
                sum -= nums[left];
                left++;
            }
        }
        return result == INT_MAX ? 0 : result;
        
    }
};
