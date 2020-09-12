// USING HASHMAP
// O(n) || O(n)
void findFrequency(int arr[], int n) 
{ 
	unordered_map<int, int> mp; 

	for (int i = 0; i < n; i++) 
    { 
		mp[arr[i]]++; 
	} 
	for (auto i : mp) { 
		cout<<i.first<<" "<<i.second<<endl; 
	} 
} 

