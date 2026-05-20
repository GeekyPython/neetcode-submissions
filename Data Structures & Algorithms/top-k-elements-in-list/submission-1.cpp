class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int, int> mp;
        multimap<int, int> occurrenceMap;

        for(int i=0; i<nums.size(); i++)
        {
            if(mp.find(nums[i]) == mp.end()) mp.insert({nums[i], 1});
            else mp[nums[i]]++;
        }
        
        for(auto itr : mp)
        {
            occurrenceMap.insert({itr.second, itr.first});
        }

        for(auto itr : occurrenceMap)
        {
            cout<<itr.first<<" -> "<<itr.second<<endl;
        }

        auto itr = occurrenceMap.rbegin();
        int counter = 0;

        while(itr != occurrenceMap.rend() && counter < k)
        {
            res.push_back(itr->second);
            itr++;
            counter++;
        }
        
        return res;
    }
};
