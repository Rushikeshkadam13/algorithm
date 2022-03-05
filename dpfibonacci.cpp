#include<iostream>
using namespace std;

int dp[100000]={0};
int find(int f)
{
    if(f==1 || f==2) return 1;
    if(dp[f]!=0) return dp[f];
    else
    {
        if(dp[f-1]==0) dp[f-1]=find(f-1);
        if(dp[f-2]==0) dp[f-2]=find(f-2);
        dp[f]=dp[f-1]+dp[f-2];
        return dp[f];
    }
}
int main()
{
    int f;cin>>f;
    dp[1]=1;
    dp[2]=1;
    cout<<find(f)<<endl;
}
