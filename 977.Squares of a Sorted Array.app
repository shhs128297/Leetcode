class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {


        int left = 0;
        int right = nums.size()-1;
        int index = nums.size()-1;
        vector<int> result(nums.size());

        while(left<=right){
            
            int sl = nums[left] * nums[left];
            int sr = nums[right] * nums[right];
            if(sl>=sr){
                result[index] = sl;
                left++;
            }else{
                result[index] = sr;
                right--;
            }
            index--;
        }

        return result;
    }
};