class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Global = INT_MIN, sum = 0;
        for(int i=0;i<nums.size();i++)  {
            sum += nums[i];
            Global = (Global < sum) ? sum : Global;
            if(sum<0)   sum = 0;
        }
        return Global;
    }
}
