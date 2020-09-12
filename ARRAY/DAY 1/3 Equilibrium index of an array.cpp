// Probelm : Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.

// Use sum to find right sum and take left variable
// TC - O(n) || SC - O(1)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int r = 0, l = 0;
        for(auto i : nums)  r += i;     //use to find right sum
        for(int i=0;i<nums.size();i++)
        {
            r -= nums[i];
            if(l==r)    return i;
            l += nums[i];
        }
        return -1;
    }
};


// Brute Force || TC - O(n2) || SC - O(n)
int equilibrium(int arr[], int n) 
{ 
    int i, j; 
    int leftsum, rightsum; 
    for (i = 0; i < n; ++i)  
    {      
        leftsum = 0;  
        for (j = 0; j < i; j++) 
            leftsum += arr[j]; 
        rightsum = 0;  
        for (j = i + 1; j < n; j++) 
            rightsum += arr[j]; 

        if (leftsum == rightsum) 
            return i; 
    } 
    return -1; 
} 
