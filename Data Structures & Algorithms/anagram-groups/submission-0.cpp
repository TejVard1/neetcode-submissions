class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // sort and check

        vector<vector<string>> ans;

        unordered_map<int, vector<string>> m;

        for(auto i: strs)
        {
            m[i.size()].push_back(i);
        }

        for(auto i: m)
        {
            vector<string> v = i.second;
            unordered_map<string, vector<string>> mp;

            for(auto j: v)
            {
                string temp = j;
                sort(j.begin(), j.end());
                mp[j].push_back(temp);
            }

            for(auto j: mp)
            {
                ans.push_back(j.second);
            }
        }

        return ans;
    }
};
