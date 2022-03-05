/*
   coder->explorer333
*/        
#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define all(v) (v).begin(),(v).end()
#define sort0(v) sort(all(v))
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define bg begin()
#define en end()
#define ff first
#define ss second
#define ll long long
#define endl "\n"
#define len(s) (int)s.size()
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define vi vector<int>
#define vll vector<ll>
 

using namespace std;
vector<string> v;

	void permu(string s,int l,int r)
	{
		if(l==r) v.push_back(s);

		else
			{for(int i=l;i<=r;i++)
				{
					
					swap(s[i],s[l]);
					permu(s,l+1,r);
					swap(s[i],s[l]);

				}
			}
	}

	void solve()
	{
		string s="rushi";
		permu(s,0,len(s)-1);
		sort(all(v));
		v.erase(unique(v.begin(),v.end()),v.end());
		
		for(auto x:v) cout<<x<<endl;


	}


	int main()
	{
		// ios_base::sync_with_stdio(false);
		// cin.tie(NULL);

  //   #ifndef ONLINE_JUDGE
		// freopen("input.txt" , "r" , stdin);
		// freopen("output.txt", "w", stdout);
  //   #endif

		int t;
    //cin>>t;
		t=1;
		while(t--)
		{
			solve();
		}
		return 0;
	}