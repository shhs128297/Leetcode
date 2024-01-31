class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> numMap;
        for(int i=0; i<nums.size(); i++){
            int need = target - nums[i];
            if(numMap.count(need)){
                return {numMap[need] ,i};
            }

            numMap[nums[i]] = i;
        }
    return {};
    }
};