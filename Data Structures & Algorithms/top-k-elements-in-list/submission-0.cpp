class Solution {
public:
    /*
    
    integer array
    int k;

    arr => freq map <arr value -> frequency> => sort based on frequency => take top k ones => O(n log n)

    */
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // sorting approach -> n log n

        map<int, int> m;
        map<int, vector<int>> m_flip;
        vector<int> ans;

        for(auto i: nums)
        {
            m[i]++;
        }
        for(auto i: m)
        {
            m_flip[i.second].push_back(i.first);
        }

        int i = 0;
        
        for(auto itr=m_flip.end(); i<k;)
        {
            --itr;
            for(auto j= itr->second.begin(); i<k && j != itr->second.end();j++)
            {
                ans.push_back(*j);
                i++;
            }
        }
        return ans;
    }
};
