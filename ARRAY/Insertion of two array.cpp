// Using 2 sets
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;
        unordered_set<int>t;
        for(auto i:nums1)
            s.insert(i);
        for(auto i:nums2)
            t.insert(i);
        vector<int> ans;
        for(auto i:t)
        {
            if(s.find(i) != s.end())
                ans.push_back(i);
        }
        return ans;
    }
};
// Efficient Way 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s(nums1.begin(),nums1.end());
        vector<int>ans;
        for(auto i:nums2)
        {
            if(s.erase(i))
                ans.push_back(i);
        }
        return ans;
    }
};  