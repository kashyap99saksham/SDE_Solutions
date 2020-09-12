// Intervals = {(1,3),(2,4),(6,8),(9,10)}
// Output: 1 4 6 8 9 10
// approch is to sort vector and iterate linearly and check whether interval overlap with previous one or not
vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> vec, int n) {
    sort(vec.begin(),vec.end());
    vector<pair<int,int>>v;
    pair<int,int> pr = vec[0];
    for(auto i : vec)
    {
        if(i.first <= pr.second)
        {
            pr = {min(i.first,pr.first) , max(i.second,pr.second)};
        }
        else
        {
            v.push_back(pr);
            pr = {i.first , i.second};
        }
    }
    v.push_back(pr);
    return v;
}