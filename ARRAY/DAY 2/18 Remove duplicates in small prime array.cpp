// Return only 1 duplicate number
 int findDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) 
        { 
            if (nums[abs(nums[i])] >= 0) 
                nums[abs(nums[i])] = -nums[abs(nums[i])]; 
            else
                return abs(nums[i]); 
        }  
        return -1;
    }
// Return All Duplicate elements [1 to n] || Leetcode Problem
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

