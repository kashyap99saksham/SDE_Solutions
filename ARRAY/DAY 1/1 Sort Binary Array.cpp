// Count Zero's and One's [TC - O(N) || SC - O(1)]
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int one=0,zero=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1)
            one++;
        if(arr[i]==0)
            zero++;
    }
    for (int i = 0; i < zero; i++)
        arr[i] = 0;
    for (int i = zero; i < n; i++)
        arr[i] = 1;
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}

// Second Approach [TC - O(N) || SC - O(1)]
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<1)
        {
            j++;
            swap(arr[i],arr[j]);
        }
    }
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    
}