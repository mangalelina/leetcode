class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;
        int sum;
        // int sum = nums[i] + nums[j];
        while (i < j) {
            //cout << "i is " << i << " j is " << j << " sum is " << sum << endl;
            sum = nums[i] + nums[j];
            if (sum == target) return {i+1, j+1};
            else if (sum > target) j--;
            else if (sum < target) i++;
            
        }
        return {-1, -1};
        
    }
};
