#include<iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int dp[size];
    fill_n(dp,size,1);
    int max=dp[0];
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]<=arr[j])
            {
                if(dp[i]<=dp[j])
                {
                    dp[i]=dp[j]+1;
                }
            }
        }
    }

    for(int i=1;i<size;i++)
    {
        if(max<dp[i])
        {
            max=dp[i];
        }
    }
    cout<<dp[size-1];
}
