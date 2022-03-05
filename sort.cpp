#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int A[] = { 2,5,1,45,85,4,23 };
    int s = sizeof(A)/sizeof(A[0]);
    cout<<s<<endl;
    //Selection sort
    
    for (int i=0; i<s-1; i++)
    {
        for(int j=i+1;j<s; j++) if(A[i]>A[j]) swap(A[i],A[j]);

    }
    for(int i=0;i<s;i++) cout<<A[i]<<" ";

    // Bubble Sort
    /*
    for(int i=0;i<(s-2);i++)
    {
    for(int i=0;i<(s-2);i++)
    {
       if(A[i]>A[i+1])  swap(A[i],A[i+1]);
    }
    }
    for(int i=0;i<s-1;i++) cout<<A[i];
    */

    //Insertion sort
    /*
    for (int i=1; i<s-1; i++)
    {
        int key, j;
        key = A[i];
        j = i-1;
        while (j>=0 && A[j] > key)
        {
            A[j+1] = A[j];
            j = j-1;
        }
        A[j+1] = key;
    }
    for(int i=0;i<s-1;i++) cout<<A[i];
    */












}
