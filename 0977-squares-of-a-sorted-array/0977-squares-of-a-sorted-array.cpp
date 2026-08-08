class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int i=0;
        int j=nums.size()-1;
        for(int k=0;k<nums.size();k++){
            nums[k]=nums[k]*nums[k];
        }
        int k=nums.size()-1;
        while(i<=j){
            if(nums[i]>=nums[j]){
                result[k]=nums[i];
                i++;
                k--;
            }
            else if(nums[i]<nums[j]){
                result[k]=nums[j];
                j--;
                k--;
            }
        }
        
        
        return result;
    }
};