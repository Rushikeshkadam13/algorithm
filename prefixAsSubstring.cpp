#include<bits/stdc++.h>

using namespace std;

int pa(string s,int m)
{
    int n=s.length();
    vector<int> v(n);
    int j;
    for(int i=1;i<n;i++)
    {
        j=v[i-1];
        while(j>0 && s[i]!=s[j])
            j=v[j-1];
        if(s[i]==s[j])
            j++;
        v[i]=j;
    }
    return *max_element(v.begin()+m,v.end());
}

int main()
{
    int tt;cin>>tt;while(tt--)
    {
        string s1,s2,x,ss,s3,s4;
        cin>>s1>>s2>>x;
        vector<pair<string,int>> vs;



int cnt=0,n;

        for(int i=0;i<=s1.length();i++)
        {
            s3=s1.substr(0,i);
            for(int j=0;j<=s2.length();j++)
            {
              s4=s2.substr(0,j);
              string g=s3+s4;
              ss=g+"#"+x;

             // cout<<g<<endl;
              n=g.length();
               vs.push_back(make_pair(g,n));
              //if(pa(ss,n)>=g.length()) cnt++;
            }
        }
        sort(vs.begin(),vs.end());
        vs.erase(unique(vs.begin(),vs.end()),vs.begin());

        int i;
       for(i=0;i<vs.size();i++)
        {
           if(pa(vs[i].first, vs[i].second)>=vs[i].second)
                cnt++;
     }


        cout<<cnt<<endl;


    }

}
