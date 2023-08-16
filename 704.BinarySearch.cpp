class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;
        int dv = -1;

        while(left<=right){
            dv = (left + right)/2;

            if(target>nums[dv]){
                left = dv + 1;
            }else if(target<nums[dv]){
                right = dv - 1;
            }else{
                ans = dv;
                return ans;
            }

        }
        return ans;
    
    }
};