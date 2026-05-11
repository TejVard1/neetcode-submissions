class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

        unordered_map<int, int> ms;
        unordered_map<int, int> mt;

        for(auto i: s)
        {
            int val = i-'a';
            if(ms.count(val))
            {
                ms[val]++;
            }
            else
            {
                ms[val]=1;
            }
        }

        for(auto i: t)
        {
            int val = i-'a';
            if(mt.count(val))
            {
                mt[val]++;
            }
            else
            {
                mt[val]=1;
            }
        }

        for(auto i: ms)
        {
            if(mt[i.first] != i.second) return false;
        }
        return true;
    }
};
