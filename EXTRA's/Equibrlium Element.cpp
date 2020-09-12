// O(N) || O(1)
int pivotIndex(vector<int>& nums) {
        int rs = 0,ls = 0;;
        for(int i=0; i<nums.size();i++)
            rs += nums[i];
        for(int i=0;i<nums.size();i++)
        {
            rs = rs - nums[i];
            if(ls==rs)  
                return i;     
            ls = ls + nums[i];
        }
        return -1;
}