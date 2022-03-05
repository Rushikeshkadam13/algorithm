#include<bits/stdc++.h>
using namespace std;
#define N 8


int knight(int x,int y,int stpn,int A[N][N],int xMove[N],int yMove[]);

int check(int x,int y,int A[N][N])
{
	return (x>=0 && x<N && y>=0 && y<N && A[x][y]==-1);

}

void printSolution(int A[N][N])
{
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < N; y++)
			cout << " " << setw(2) << A[x][y] << " ";
		cout << endl;
	}
}

int solve()
{
	int A[N][N];

	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++) A[i][j]=-1;

		//takes more time
		// int xMove[8]={1, 1, 2,  2, -1, -1, -2, -2};
		// int yMove[8]={2,-2, 1, -1,  2, -2, -1,  1};

		//takes around 48 second
		// int xMove[8] = { 1, 2, -1, -2, -2, -1, 1, 2 };
		// int yMove[8] = { 2, 1, 2, 1, -1, -2, -2, -1 };
 
        //takes around 3 seconds
 		int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
		int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };


		A[0][0]=0;

		if (knight(0, 0, 1, A, xMove, yMove) == 0) {
			cout << "Solution does not exist";
			return 0;
		}
		else
			printSolution(A);

		return 1;

	}

	int knight(int x,int y,int stpn,int A[N][N],int xMove[8],int yMove[8])
	{
		int i,xnxt,ynxt;
		if (stpn == N * N)
			return 1;

		for( i=0;i<8;i++)
		{
			xnxt = x+xMove[i];
			ynxt = y+yMove[i];
			if(check(xnxt,ynxt,A))
			{
				A[xnxt][ynxt]=stpn;
				if (knight(xnxt, ynxt, stpn + 1, A,	xMove, yMove)== 1)
					return 1;
				else
					A[xnxt][ynxt]=-1;	
			}
		}
		return 0;
	}




	int main()
	{		
		solve();
		return 0;
	}