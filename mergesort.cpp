
#include <iostream>
using namespace std;
int C=0;
void merge(int arr[], int l, int m, int r)
{
	cout<<"C="<<C<<endl;
	C=C+1;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for (int i = 0; i < n1; i++)
		{L[i] = arr[l + i];
		cout<<"L[i]= "<<L[i]<<endl;
		}

	for (int j = 0; j < n2; j++)
		{R[j] = arr[m + 1 + j];
		cout<<"R[i]= "<<R[j]<<endl;}

	int i = 0;

	int j = 0;

	int k = l;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}


	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}


	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}


void mergeSort(int arr[],int l,int r){

	//this function consider l and m differently
	//when you put (int arr[],int l,int m)it is not respond
	//to if statement.
	if(l>=r){

		cout<<"RET"<<endl;
		return;
	}

    //this function have 3 variables r and m values stores di
    //fferntly when you pass m as r above function
    cout<<endl;
    cout<<"****"<<endl;
    cout<<"l= "<<l<<" r="<<r<<endl;

	int m = (l+r-1)/2;

	cout<<"l="<<l<<"  m="<<m<<endl;
	mergeSort(arr,l,m);

	cout<<"m+1="<<m+1<<" r="<<r<<endl;
	mergeSort(arr,m+1,r);

    cout<<"l="<<l<<" m="<<m<<" r="<<r<<endl;
    cout<<"CVBNM"<<endl;
	merge(arr,l,m,r);
}
void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);

	cout<<endl<<arr_size<<endl;
	mergeSort(arr, 0, arr_size - 1);

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}
