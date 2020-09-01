#include <iostream>
using namespace std;

// USING ARRAY INDEX AS FREQUENCY COUNT 
// wE JUST UPDATE THE VALUE BY FREQUENCY COUNT AND STORE VALUE IN THAT i'th PLACE. cOZ THAT VALUE IS NOW PROCESSED. NOW NO NEED TO CONTAIN THAT VALUE. SO USE THAT LOCATION FOR REPLACED VALUE (i.e. BY FREQUENCY COUNT) 
// Input: arr[] = [1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10] 
// 2, 3, 3, 2, 5
// 3 -1 -1 2 5
// 0 -1 -2 2 5
// 0 -2 -2 0 5
// 0 -2 -2 0 -1


void MakeFreqArray(int *arr,int n)
{
    int i = 0; 
    while(i<n)    //Ignoring Processed values
    {
        if (arr[i] <= 0) 
        { 
            i++; 
            continue; 
        } 
        int x = arr[i]-1;
        if(arr[x] > 0)
        {
            arr[i] = arr[x];
            arr[x] = -1;
        }
        else
        {
            arr[x]--;
            arr[i] = 0;
            i++;
        }
    }
}
int main() {
  int n;  cin>>n;
  int arr[n]; 
  for(int i=0;i<n;i++)  cin>>arr[i];
  MakeFreqArray(arr,n);
  for(int i=0;i<n;i++)
  {
    cout<<i+1<<"-->"<<abs(arr[i])<<endl;
  }
}