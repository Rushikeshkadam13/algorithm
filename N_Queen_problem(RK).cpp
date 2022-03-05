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
#define N 7



int safe(int row,int col,int A[N][N])
{
	for(int i=0;i<col;i++)
		if(A[row][i]) return 0;

	
	for(int i=row,j=col; j>=0 && i>=0 ;i--,j--)
		if(A[i][j]) return 0;

	for(int i=row,j=col; i<N && j>=0; i++,j--)
		if(A[i][j]) return 0;

	return 1;
}

void prnt(int A[N][N])
{
	for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			cout<<A[i][j]<<" ";

			cout<<endl;
		}
}

int q(int A[N][N], int col)
{
   if(col==N) return 1;
   for(int row=0;row<N;row++) 
   {
	   	if(safe(row,col,A))
	   	{
	   		A[row][col]=1;
	   		if(q(A,col+1)) return 1;

	   		
	   			A[row][col]=0; 	
	   	}

   }
   return 0;
}



	void solve()
	{
		int A[N][N];
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++) A[i][j]=0;

				if(q(A,0))
					prnt(A);

				else
					cout<<"NO solution";		

	}





int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    #ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w", stdout);
    #endif

	int t;
    //cin>>t;
	t=1;
	while(t--)
	{
		solve();
	}
	return 0;
}