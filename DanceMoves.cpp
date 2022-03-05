#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;cin>>tt;while(tt--)
    {
        int x,y;
        cin>>x>>y;
        int z=y-x;
        if(z>=0)
        {

        if(z%2==1)
            cout<<(z+1)/2+1<<endl;
        else
            cout<<z/2<<endl;
        }
        else
        {
            cout<<-z<<endl;
        }

    }
}
