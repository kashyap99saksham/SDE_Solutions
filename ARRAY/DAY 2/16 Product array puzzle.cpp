// We use Extra array's To store Right Product and left variable to store left  Product
// TC - O(N) || SC - O(N) Extra array is used for output as well
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long left=1;
        vector<int>v(nums.size());
        v[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2 ; i>=0 ;i--)
        {
            v[i] = v[i+1] * nums[i];
        }
        int i;
        for( i=0;i<nums.size()-1;i++)
        {
            v[i] = left * v[i+1];
            left=left*nums[i];
        }
        v[i] = left;
        return v;
    }
};