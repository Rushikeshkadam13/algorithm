/*
    https://www.geeksforgeeks.org/counting-sort/
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

void countsort(int A[], int n)
{
    int mx = *max_element(A,A+n);
    int mn = *min_element(A,A+n);

    vector<vector<int>> v(mx+1);

    for(int i=0;i<n;i++)
    	{
    		v[A[i]].push_back(A[i]);
    	}

    for(int i=mn;i<=mx;i++)
    {
        for(auto x:v[i])
        	cout<<x<<" ";       
    }  
}

int main()
{
    int A[]={2,159,5,11,1,6,31,159,81,89,47};
    int n = sizeof(A)/sizeof(int);
    //cout<<n<<endl;
    countsort(A,n);
}