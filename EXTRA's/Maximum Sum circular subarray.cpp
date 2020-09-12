class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int 
            G_max = INT_MIN,        //THis is for edge case || when all are -ve
            maxi = 0,
            G_min = INT_MAX,
            mini = 0,
            T_sum = 0;        
        ;      
        for(auto i : A)
        {
            T_sum += i;
            maxi += i;
            G_max = max(G_max,maxi);
            if(maxi<0)   maxi = 0;
            mini += i;
            G_min = min(G_min,mini);
            if(mini>0)   mini = 0;
        }
        if(T_sum == G_min)  return G_max;
        return max(G_max , T_sum - G_min);      //Approch is maximum from kadane's ans circular
    }
};