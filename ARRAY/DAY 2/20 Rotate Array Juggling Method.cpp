// Refer This Image For More Understanding : https://media.geeksforgeeks.org/wp-content/uploads/arra.jpg

#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)

int Gcd(int n,int d)
{
   if(d==0) return n;
   else return Gcd(d,n%d);
}
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int n;  cin>>n;
        int d;  cin>>d;
        int arr[n];
        loop(n) cin>>arr[i];
        int g = Gcd(n,d);
        for(int i=0;i<g;i++)
        {
            int temp = arr[i]; // 1 2 3 4 5 6 7 8
            int j = i;
            while(1)
            {
                int k = j+d;
                if(k>=n)
                    k = k-n;
                if(k==i) break;
                arr[j] = arr[k];
                j = k;
            }
            arr[j]=temp;
        }
        loop(n) cout<<arr[i]<<" ";
        cout<<endl;
    }
    
}

