// Return only 1 duplicate number
 int findDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) 
        { 
            if (nums[abs(nums[i])] >= 0) 
                nums[abs(nums[i])] = -nums[abs(nums[i])]; 
            else
                return abs(nums[i]); 
        }  
        return -1;
    }
// Return All Duplicate elements [1 to n] || Leetcode Problem
vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        for (int i = 0; i < nums.size(); i++) 
        { 
            if (nums[abs(nums[i]) - 1] >= 0) 
                nums[abs(nums[i])-1] = -nums[abs(nums[i])-1]; 
            else
                v.push_back(abs(nums[i])); 
        }  
        return v;
    }










    bool isCyclicByDFS(int v ,vector<int> adj[], int visited[]){
if(visited[v] == 2) return false;
if(visited[v] == 1){
return true;
}
visited[v] = 1;
vector<int> v_n = adj[v];
int size = v_n.size();
bool isCyclicBool = false;
for(int i = 0; i < size;++i){
isCyclicBool |= isCyclicByDFS(v_n[i],adj,visited);
}
visited[v] = 2;
return isCyclicBool;
}
bool isCyclic(int V, vector<int> adj[])
{
// Your code here
int visited[V]; //0 - white - not visited, 1 - red - processing, 2 - black - done processing
for(int i = 0; i < V;++i){
visited[i] = 0;
}

for(int i = 0; i < V;++i){
if(visited[i] == 0){
if(isCyclicByDFS(i,adj,visited)) return true;
}
}

return false;
}