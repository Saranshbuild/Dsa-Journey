class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int sum1 = nums[0];
        int sum2 = nums[0];
        int max_sum=nums[0];
        int min_sum=nums[0];
        
        for(int i=1;i<n;i++){
            int c1 = nums[i];
            sum1 = sum1+nums[i];
             sum1 = max(c1,sum1);
            max_sum = max(max_sum,sum1);
        }

        for(int i=1;i<n;i++){
            int c1 = nums[i];
            sum2 = sum2+nums[i];
            sum2 = min(c1,sum2);
            min_sum = min(min_sum,sum2);
        }

        int final = max(max_sum,abs(min_sum));
        return final;
    }
};