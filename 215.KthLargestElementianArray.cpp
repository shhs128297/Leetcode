class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int index=1;
        while(index<nums.size()){
           compare(nums, index);
           index++;
        }

        return nums[index-k];
    }

    void compare(vector<int>& nums, int i){
        if(i>=1 && nums[i]<nums[i-1]){
                int tmp = nums[i-1];
                nums[i-1] = nums[i];
                nums[i] = tmp;
                compare(nums, i-1);
        }
    }
};


//Time Limit Exceeded 