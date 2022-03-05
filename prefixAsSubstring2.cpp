#include<bits/stdc++.h>
using namespace std;

void zfunc(string s,vector<int> &z)
{
     int n = (int) s.length();
    //vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {


        if (i <= r)
        {
            z[i] = min (r - i + 1, z[i - l]);

        }

        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
             z[i]=z[i]+1;


        if (i + z[i] - 1 > r)
           {

           l = i, r = i + z[i] - 1;

           }
    }

}

vector<vector<int>> suffixArray(string s,vector<int> &pi,int ns1)
{
       int n = (int)s.length();
    //vector<int> pi(n);
    vector<vector<int>> v(n);
    for (int i = 1; i < n; i++)
    {
        int j = pi[i-1];

        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;

        if(i>ns1)
        v[j].push_back(i);
    }
    return v;

}


int main()
{
    int tt;cin>>tt;while(tt--)
    {
        string s1,s2,x;
        cin>>s1>>s2>>x;

        int
        ns1=s1.length(),
        ns2=s2.length(),
        nx=x.length();

        s1=s1+"#"+x;
        int nns1=s1.length();
        vector<int> pre_s1(nns1);

        vector<vector<int>> vp = suffixArray(s1,pre_s1,ns1);

        /*for(int i=0;i<=ns1;i++)
        {
            cout<<"i="<<i<<endl;
            for(int k=0; k<vp[i].size(); k++)
            {

              cout<<vp[i][k]-ns1-1<<" ";

            }
            cout<<endl;

        }
       /* for(int i=0;i<nns1;i++)
        {
                cout<<pre_s1[i]<<" ";
        }*/

        s2=s2+"#"+x;
        int nns2=s2.length();
        vector<int> zfunc_s2(nns2+1);

        zfunc(s2,zfunc_s2);
       // cout<<zfunc_s2[ns2+2];
        /*for(int i=0;i<nns2;i++)
        {
                cout<<zfunc_s2[i]<<" ";
        }*/

       /* for(int i=0;i<=ns1;i++)
        {
            cout<<"i="<<i<<endl;
            for(int k=0; k<vp[i].size(); k++)
            {

              int indx=vp[i][k]-ns1-1;
              cout<<"indx="<<indx<<" ";
              cout<<zfunc_s2[ns2+indx+2]<<" ";

            }
            cout<<endl;

        }*/


        int mx=0;
        int sum=0;
        int indx;
        for(int i=1;i<=ns1;i++)
        {
            //cout<<"i="<<i<<endl;

            for(int k=0; k<vp[i].size(); k++)
            {

                 indx=vp[i][k]-ns1-1;
                 //cout<<"indx="<<indx<<endl;
                 mx=max(mx,zfunc_s2[ns2+indx+2]);
            }
            sum=sum+mx;
            mx=0;

            //cout<<mx<<endl;;

        }
        int mm=*max_element(zfunc_s2.begin(),zfunc_s2.end());
        int maxx=*max_element(pre_s1.begin(),pre_s1.end());
        cout<<maxx+sum+1+mm;

    }
}
