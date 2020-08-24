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