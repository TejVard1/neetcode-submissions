class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> m;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]].push_back(i);
        }

        for(auto i: m)
        {
            if(m.count(target - i.first))
            {
                if(target == 2* i.first)
                {
                    ans.push_back(i.second[0]);
                    ans.push_back(i.second[1]);
                    break;
                }
                else
                {
                    ans.push_back(i.second[0]);
                    cout << i.second[0] << "  " << m[target - i.first][0] << endl;
                    ans.push_back(m[target - i.first][0]);
                    break;
                }
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
