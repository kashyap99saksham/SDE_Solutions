// TC - O(N) || SC - O(1)
// Use negative concept 
// LEETCODE Solution
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        for (int i = 0; i < nums.size(); i++) 
        { 
            if (nums[abs(nums[i]) - 1] >= 0) 
                nums[abs(nums[i])-1] = -nums[abs(nums[i])-1]; 
            else
                v.push_back(abs(nums[i])); 
        }  
        return v;
    }
};