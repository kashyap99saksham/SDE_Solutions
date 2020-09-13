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
        ans.push_back(checkMountain(a,queries[i].first , queries[i].second));
    return ans;
}