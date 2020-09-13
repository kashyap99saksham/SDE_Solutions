int convertFive(int n)
{
    if(!n)  return 5;
    int ans = 0, i = 1, rem = 0;
    while(n)
    {
        rem = n % 10;
        if(!rem)    rem = 5;
        ans = ans + rem * i;
        i = i * 10;
        n = n/10;
    }
    return ans;
}