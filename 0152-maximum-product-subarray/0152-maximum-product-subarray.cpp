class Solution {
public:
    int maxProduct(vector<int>& nums) {
     
     int ans = nums[0];
     int max_end=nums[0] , min_end=nums[0];
     int n = nums.size();
     for(int i=1;i<n;i++){
        int c1 = nums[i];
        int c2 = nums[i]*max_end;
        int  c3 = nums[i]*min_end;
        max_end = max(c1,max(c2,c3));
        min_end = min(c1,min(c2,c3));
        ans = max(ans,max_end);
     }
      return ans;
    }
};