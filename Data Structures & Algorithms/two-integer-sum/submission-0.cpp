class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int st=0;
        int end=nums.size()-1;

        while(st != end)
        {
            if(nums[st]+nums[end] > target) end--;
            else if (nums[st]+nums[end] < target) st ++;
            else break;
        }
        vector<int> ans;
        ans.push_back(st);
        ans.push_back(end);
        return ans;
    }
};
