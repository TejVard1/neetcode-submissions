class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        /*
            nums
            k

            map : val -> freq

            10^4 : len of the array

            freq <= n <= 10^4

        */

        vector<int> ans;

        unordered_map<int, int> m;

        for(auto i: nums)
        {
            m[i]++;
        }

        unordered_map<int, vector<int>> m1;

        for(auto i: m)
        {
            m1[i.second].push_back(i.first);
        }

        int i=nums.size();
        int count = 0;
        while(1)
        {
            if(m1[i].size() != 0)
            {
                for(auto j: m1[i])
                {
                    ans.push_back(j);
                    count++;
                    if(count == k) return ans;
                }
            }
            i--;
        }
        return ans;
    }
};
