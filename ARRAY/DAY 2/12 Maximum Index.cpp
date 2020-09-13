// Problem Description: Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].

// Time complexity : O(n) Space Complexity : O(n) 
// We used two arrays leftmin ans rightmax 
// and calculate maximum difference of j-i

int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    vector <int> leftMin(n);
    vector <int> rightMax(n);
    leftMin[0] = A[0];
    for(int i=1;i<n;i++)
        leftMin[i] = min(leftMin[i-1] , A[i]);
    rightMax[n-1] = A[n-1];
    for(int i=n-2;i>=0;i--)
        rightMax[i] = max(rightMax[i+1] , A[i]);
    int x = 0,y = 0,ans = 0;
    while(x<n && y<n)
    {
        if(leftMin[x] <= rightMax[y])
        {
            ans = max(ans,y-x);
            y++;
        }
        else
            x++;
    }
    return ans;
}
