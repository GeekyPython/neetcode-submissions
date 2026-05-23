class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxVol = 0;
        for(int i = 0; i<heights.size()-1; i++){
            for(int j=0; j<heights.size(); j++)
            {
                int h = min(heights[i], heights[j]);
                int vol = h * abs(j-i);
                if(vol > maxVol) maxVol = vol;
            }
        }
        return maxVol;
    }
};
