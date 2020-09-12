// TC - O(n) || SC - O(1)
// We use kadane's + circular concept
// circular concept says that : total sum - Min subarray
// ans will be Maximum of kadane's and circular
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0 ; i<n ; i++)
	    {
	        cin>>arr[i];
	    }
	    int Gmaxi =INT_MIN,Tsum=0,Gmini = INT_MAX,mini=0,maxi=0;
	    for(int i=0 ; i<n ; i++)
	    {
	        Tsum = Tsum + arr[i];
	        maxi = maxi + arr[i];
	        if(maxi>Gmaxi)
	            Gmaxi=maxi;
	        if(maxi < 0)
	            maxi = 0;
	       mini = mini + arr[i];
	        if(mini<Gmini)
	            Gmini=mini;
	        if(mini > 0)
	            mini = 0;
	    }
	    if(Tsum == Gmini)
	    cout<<arr[0]<<" ";
	    else
	    cout<<max(Gmaxi,Tsum-Gmini)<<" ";
	    cout<<endl;
	}
	return 0;
}
