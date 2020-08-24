// Approach: Given an array of heights of lines of boundaries of the container, 
// find the maximum water that can be stored in a container. So start with the first and last element and check the amount of water that can be contained and store that container. 
// Now the question arises is there any better boundaries or lines that can contain maximum water. So there is a clever way to find that.
// Initially, there are two indices the first and last index pointing to the first and the last element (which acts as boundaries of the container),
// if the value first index is less than the last index increase the first index else decrease the last index. As the increase in width is constant, 
// by following the above process the optimal answer can be reached.
int maxArea(vector<int>& height) 
    {
        int i = 0,j=height.size()-1,ans=-1;
        while(i<j)
        {
            // int l = min(height[i] , height[j]);
            // int b = abs(j-i);
            // ans = max(ans, l * b);
            ans = max(ans , min(height[i] , height[j]) * (j-i));
            if(height[i] < height[j])   i++;
            else    j--;
        }
        return ans;
    }
