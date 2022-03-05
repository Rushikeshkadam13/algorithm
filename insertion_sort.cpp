#include<iostream>
using namespace std;
int main()
{
    int A[]={89,3,31,3,2,4,12};
    int sz=sizeof(A)/sizeof(A[0]);
    int j;

    cout<<"ascending order"<<endl;
    for(int i=1;i<sz;i++)
    {
        int key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=key;
    }
    for(int i=0;i<sz;i++)
    {
       cout<<A[i]<<endl;
    }

    cout<<"descending order"<<endl;
     for(int i=1;i<sz;i++)
    {
        int key=A[i];
        j=i-1;
        while(j>=0 && A[j]<key)
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=key;
    }
     for(int i=0;i<sz;i++)
    {
       cout<<A[i]<<endl;
    }
}
