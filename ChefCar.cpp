#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;cin>>tt;
    while(tt--)
    {
        int n,v,s=0,tank;cin>>n>>v;


            int k=(n-1)/v;
            int r=(n-1)%v;
            for(int i=1;i<=k;i++)
            {
                s=s+i*v;
            }
            s=s+r*v;


        cout<<(n*(n-1))/2<<" "<<s<<endl;

    }
}
