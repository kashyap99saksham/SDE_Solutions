// TC - O(M+N) || SC - O(1)
int max_path_sum(int A[], int B[], int l1, int l2)
{
    int sum1=0,sum2=0,result =0;
    int i=0,j=0;
    while(i<l1 && j < l2)
    {
        if(A[i] < B[j])
            sum1 += A[i++];
        else if(A[i] > B[j])
            sum2 += B[j++];
        else
           {
               result = result + max(sum1,sum2);
               sum1 = 0 , sum2 = 0;
               while(i<l1 && j<l2 && A[i]==B[j])
               {
                   result += A[i++];
                   j++;
               }
           } 
    }
    while (i < l1) 
        sum1  +=  A[i++]; 
    while (j < l2) 
        sum2 +=  B[j++]; 
    result +=  max(sum1, sum2); 
  
    return result;
    
}


// Simpler TC - O(M+N) || SC - O(1)  
int max_path_sum(int A[], int B[], int l1, int l2)
{
    int i=0, j=0, UpperSum=0, LowerSum=0, ans = 0;
    while(i<l1 && j<l2)
    {
        UpperSum += A[i];
        LowerSum += B[j];
        if(A[i]==B[j])
        {
            ans += max (UpperSum , LowerSum);
            UpperSum = 0;
            LowerSum = 0;
        }
        i++;
        j++;
    }
    while(i<l1)
    {
        UpperSum += A[i];
        i++;
    }
    while(j<l2)
    {
        LowerSum += B[j];
        j++;
    }
    ans += max(LowerSum , UpperSum);
    return ans;
}