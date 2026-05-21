class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        cout<<"Nums: ";
        for(auto &itr: nums)
        {
            cout<<itr<<" ";
        }
        cout<<endl;

        int size = nums.size();
        if(size == 0 || size == 1) return size;
        int length = 1;
        int max = 0;

        for(int i = 0; i<size-1; i++)
        {
            if(nums[i]+1 == nums[i+1]){
                cout<<"Incrementing length to: "<<length+1<<endl;
                ++length;
            }
            else if(nums[i] == nums[i+1]) continue;
            else {
                cout<<"Not consecutive, max = "<<length<<endl;
                if (max < length) max = length;
                length = 1;
            }
        }
        if(max < length) max = length;

        return max;

    }
};
