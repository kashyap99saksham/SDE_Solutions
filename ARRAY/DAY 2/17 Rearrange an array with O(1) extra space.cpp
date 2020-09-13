// Rearrange the given array so that arr[i] becomes arr[arr[i]]
// I used same space for containing both values together how ? : we modify value a[i] = a[i] + a[a[i] % n] * n
// Hence we update a[i] then if we want previous value then we can get by dividing n. 
// https://www.youtube.com/watch?v=Zq208EIYTu8&t=418s
#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;  cin>>t;
	while(t--)
	{
	    int n;  cin>>n;
	    long long arr[n];
	    for(int i=0;i<n;i++)    cin>>arr[i];
	    for(int i=0;i<n;i++)
	        arr[i] = arr[i] + (arr[arr[i]]%n) * n;
	    for(int i=0;i<n;i++)
	        cout<<arr[i]/n<<" ";
       cout<<endl;
	}
	return 0;
}