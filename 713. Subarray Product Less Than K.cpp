class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n=nums.size();
        int left=0, prod=1, ans=0;
        for(int right=0; right<n; right++)
        {
            prod= prod*nums[right];
            
            while(prod>=k) prod=prod/nums[left++];
            ans+= right-left+1;
        }
        return ans;
    }
};
