// Product of Array Except Self
// O(n) || O(n)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int right=1,var=1;
        vector<int>v(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            var = var * nums[i];
            v[i] = var;
        }
        for(int i=nums.size()-1;i>0;i--)
        {
            v[i] = v[i-1] * right;
            right *= nums[i];
        }
        v[0] = right;
        return v;
    }
};  