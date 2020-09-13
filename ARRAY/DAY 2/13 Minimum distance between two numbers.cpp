// TC - O(N) || SC - O(1)
// Just Check if x comes then check if we have y or not vice versa
#define ll long long 
long long minDist(long long arr[], long long n, long long x, long long y) {
   bool Xflag = false;
    bool Yflag = false;
    int dist = INT16_MAX;
    int xind,yind;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == x)
        {
            Xflag = true;
            xind = i;
            if(Yflag == true)
            {
                dist = min(dist,abs(xind - yind));
            }
        }
        if(arr[i] == y)
        {
            Yflag = true;
            yind = i;
            if(Xflag == true)
            {
                dist = min(dist,abs(xind - yind));
            }
        }
    }
    if(dist < INT16_MAX)    return dist;
    return -1;
    
}