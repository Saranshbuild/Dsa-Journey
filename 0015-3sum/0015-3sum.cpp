class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
      
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
         int j=0 , k=n-1;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            j = i+1;
            k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                 ans.push_back({nums[i],nums[j],nums[k]});
                 j++;
                 k--;

                 while(j<n &&nums[j]==nums[j-1]){
                    j++;
                 }
                 while(k>0 && nums[k]==nums[k+1]){
                    k--;
                 }
                }
                else if(sum<0){
                    j++;
                }
                 else{
                    k--;
                 }
            }


        }
        return ans;
    }
};