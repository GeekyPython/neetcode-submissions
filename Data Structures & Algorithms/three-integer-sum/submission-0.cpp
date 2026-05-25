class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>res;
        for(int outer=0; outer < nums.size()-2; outer++)
        {
            if(nums[outer] > 0) break;
            if(outer > 0 && nums[outer] == nums[outer-1]) continue;

            int left = outer+1;
            int right = nums.size()-1;

            while(left < right)
            {
                int sum = nums[left] + nums[right] + nums[outer];
                if(sum > 0){
                    right--;
                }
                else if(sum < 0)
                {
                    left++;
                }
                else
                {
                    res.push_back({nums[left], nums[right], nums[outer]});
                    left++;
                    right--;
                    //eliminate duplicates
                    while(left < right && (nums[left] == nums[left-1]))
                    {
                        left++;
                    }
                }
            }
        }

        return res;
    }
};
