class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> m;

        for(auto i: nums)
        {
            m.insert(i);
        }
        if(m.size() != nums.size()) return true;
        return false;
    }
};