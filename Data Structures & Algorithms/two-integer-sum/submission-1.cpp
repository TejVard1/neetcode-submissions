class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++)
        {
            if(!m.count(nums[i])) m[nums[i]]=i;
        }

        for(auto i: m)
        {
            if(m.count(target - i.first))
            {
                ans.push_back(i.second);
                ans.push_back(m[target - i.first]);
                break;
            }
        }

        if(ans[0] > ans[1])
        {
            int temp=ans[0];
            ans[0]=ans[1];
            ans[1]=temp;
        }

        return ans;
    }
};
