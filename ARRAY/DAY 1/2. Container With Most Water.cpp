// Problem : Here we have to select larger and broad container which can store max water in it

// TC - O(N) || SC - O(1)
// Two pointer Approach , if we find min height bar then go ahead with larger one
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int i = 0, j = height.size()-1, ans = -1;
        while(i<j)
        {
            ans = max(ans,min(height[i],height[j])*(j-i));
            height[i] <= height[j] ? i++ : j--;
        }
        return ans;
    }
}; 

// Brute force approach || TC - O(n2) SC - O(1) 
int maxArea(int A[], int len) 
{ 
    int area = 0; 
   for(int i = 0; i < len; i++)  
   { 
        for(int j = i + 1; j < len; j++) 
        { 
           // Calculating the max area 
           area = max(area, min(A[j], 
                        A[i]) * (j - i)); 
                          
         }   
    } 
    return area; 
} 