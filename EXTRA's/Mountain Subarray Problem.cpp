// Input:
// N = 8
// a[] = {2,3,2,4,4,6,3,2}
// Q = 2
// Queries = (0,2), (1,3)
// Output:
// Yes
// No
// Explanation: For L = 0 and R = 2, a0 = 2,
// a1 = 3 and a2 = 2, since they are in the
// valid order,answer is Yes.
// For L = 1 and R = 3, a1 = 3, a2 = 2 and
// a3 = 4, since a1 > a2 and a2 < a4 the
// order isn't valid, hence the answer is
// No.
//      /\
//    /    \ 
//  /       \
// /         \

bool checkMountain(int arr[], int l, int r)
{
    int i = l;
    while(i+1 <= r && arr[i] <= arr[i+1])
        i++;
    while(i+1 <= r && arr[i] >= arr[i+1])
        i++;
    if(i==r )
        return true;
    return false;
}
vector<bool> processQueries(int a[], int n, vector<pair<int, int>> &queries,int q) 
{
    vector<bool>ans; 
    for(int i=0;i<queries.size();i++)
    {
        bool flg = checkMountain(a,queries[i].first , queries[i].second);
        ans.push_back(flg);
    }    
    return ans;
}