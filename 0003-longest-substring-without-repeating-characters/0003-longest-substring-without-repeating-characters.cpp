class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[256] = {0};
        int low =0 , high = 0;
        int n = s.size();
        int ans = INT_MIN;
        if(s.size()==0){
            return 0;
        }
        while(high<n){
            arr[s[high]]++;
            while(arr[s[high]]>1){
                arr[s[low]]--;
                low++;
            }
            ans = max(ans,high-low+1);
            high++;
        }
        return ans;
    }
};