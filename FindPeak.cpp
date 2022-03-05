/*
   coder->rbk
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

int findpeak(int arr[],int l,int r,int n)
{
	int mid = l+(r-l)/2;
	if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;

    else if(mid>0 && arr[mid-1] > arr[mid])
    	return findpeak(arr,l,mid-1,n);

    else 
    	return findpeak(arr,mid+1,r,n);
}

void solve()
{
    int A[]={1,3,20,4,1,0};
    int n=sizeof(A)/sizeof(A[0]);
    int l=0;
    int r=n-1;
    cout<<A[findpeak(A,l,r,n)]<<endl; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}