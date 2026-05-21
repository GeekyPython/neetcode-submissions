class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int product = 1;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            product = 1;
            for(int j=0; j<n; j++)
            {
                if(i != j) product *= nums[j];
            }
            output.push_back(product);
        }

        return output;
    }
};
