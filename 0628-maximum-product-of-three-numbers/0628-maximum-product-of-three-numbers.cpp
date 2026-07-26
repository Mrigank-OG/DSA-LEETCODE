class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // Option A: three largest
        int optionA = nums[n-1] * nums[n-2] * nums[n-3];
        
        // Option B: two smallest (could be very negative) * largest
        int optionB = nums[0] * nums[1] * nums[n-1];
        
        return max(optionA, optionB);
    }
};