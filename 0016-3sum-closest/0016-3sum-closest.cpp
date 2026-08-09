class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int resultsum;
        int maxdiff=INT_MAX;
        int diff,ressum;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            if(i!=0 && nums[i]==nums[i-1]){
                continue;
            }
            int sum=target-nums[i];
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(nums[j]+nums[k]==sum){
                    return nums[i]+nums[j]+nums[k];
                }
                else if(nums[j]+nums[k]<sum){
                    diff=sum-(nums[j]+nums[k]);
                    if(diff<maxdiff){
                        maxdiff=diff;
                        ressum=nums[i]+nums[j]+nums[k];
                    }
                    j++;
                    
                }
                else if(nums[j]+nums[k]>sum){
                    diff=(nums[j]+nums[k])-sum;
                    if(diff<maxdiff){
                        maxdiff=diff;
                        ressum=nums[i]+nums[j]+nums[k];
                    }
                    k--;
                }

            }
            
        }
        return ressum;

    }
    
};