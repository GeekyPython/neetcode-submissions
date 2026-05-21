class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> canonicalStrs = strs;
        map<string, vector<string>> stringGroups;
        vector<vector<string>> result;

        for(int i=0; i<canonicalStrs.size(); i++)
        {
            sort(canonicalStrs[i].begin(), canonicalStrs[i].end());
        }

        for(int i=0; i<strs.size(); i++)
        {
            stringGroups[canonicalStrs[i]].push_back(strs[i]);
        }

        for(auto itr : stringGroups)
        {
            result.push_back(itr.second);
        }

        return result;
    }
};
