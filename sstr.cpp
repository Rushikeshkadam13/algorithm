#include<bits/stdc++.h>
using namespace std;
vector<int> kmp_fun(string s) {
      int n = s.size();
      vector<int> pi(n);
      for(int i=1; i<n; i++)  {
            int j = pi[i-1];
            while(j and s[j] != s[i])     j = pi[j-1];
            if(s[i] == s[j])  j++;
            pi[i] = j;
      }
      return pi;
}
vector<int> z_fun(string s)     {
      int n = s.size();
      vector<int> z(n);
      int l = 0, r = 0;
      for(int i=1; i<n; i++)  {
            if(i <= r)  z[i] = min(r-i+1, z[i-l]);
            while(i+z[i]<n and s[z[i]] == s[i+z[i]])  ++z[i];
            if(i+z[i]-1 > r)  l = i, r = i+z[i]-1;
      }
      return z;
}
void solve()    {
      string a, b, x;   cin>>a>>b>>x;
      int len = x.size();
      vector<int> p = kmp_fun(a + "@" + x);
      for(int i=0;i<(int)p.size();i++)
      {
        //  cout<<p[i]<<" ";
      }
      vector<int> q = z_fun(b + "@" + x);
      for(int i=0;i<(int)q.size();i++)
      {
          //cout<<q[i]<<" ";
      }
      int temp[int(a.size())+1] = {};

      //cout<<a.size()+1<<endl;

      int l1 = a.size(), l2 = b.size(), n = x.size();
      for(int i=0; i<len-1; i++)    {

            temp[p[l1+1+i]] = max(temp[p[l1+1+i]], q[l2+1+i+1]);
      }
      /*for(int i=0;i<=(int)a.size();i++)
      {
          cout<<temp[i]<<" ";
      }*/


      for(int i=a.size(); i>0; i--)   {

             temp[p[i-1]] = max(temp[p[i-1]], temp[i]); //imp step
      }
      long long ans = 1;
      for(int i=0;i<=(int)a.size();i++)
      {
          cout<<temp[i]<<" ";
      }
      for(int i=1; i<=a.size(); i++)      {
            ans += temp[i];
      }
      ans += *max_element(p.begin()+l1+1, p.end());
      ans += *max_element(q.begin()+l2+1, q.end());
      cout<<ans<<"\n";
}
int main()  {
     // ios_base::sync_with_stdio(false);   cin.tie(0);
      int tt;     cin>>tt;
      while(tt--) solve();
}

