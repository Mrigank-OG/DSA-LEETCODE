class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=i+1;
        int unique=1;
        for(j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i=i+1;
                nums[i]=nums[j];
                unique++;
            }
        }
        return unique;
    }
};