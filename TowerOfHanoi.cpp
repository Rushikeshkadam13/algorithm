#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)

#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
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

void toh(int n,int f,int t,int a) //from =a b=auxilliary c= target
{
  if(n==0) return;
  toh(n-1,f,a,t);
  cout<<f<<" "<<t<<endl;
  toh(n-1,a,t,f);


}

void solve()
{
    int A[17];  A[0]=0;
    f(i,1,17)
    {
    	A[i]=A[i-1]*2+1;
    }
    int n=1;
    //cin>>n;
    int a=1,b=2,c=3;
    cout<<A[n]<<endl;

    toh(n,a,c,b);   
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}