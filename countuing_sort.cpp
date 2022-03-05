#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define RANGE 255
//considering only ascii characters (not negative integers)
void countSort(char arr[])
{

	char output[strlen(arr)];

	int count[RANGE + 1], i;
	memset(count, 0, sizeof(count));

	for (i = 0; arr[i]; ++i)
		++count[arr[i]];

	for (i = 1; i <= RANGE; ++i)
		count[i] += count[i - 1];

	for (i = 0; arr[i]; ++i) {
		output[count[arr[i]] - 1] = arr[i];
		--count[arr[i]];
	}

	for (i = 0; arr[i]; ++i)
		arr[i] = output[i];
}

int main()
{
	char arr[] = "geeksforgeeks345-6";

	countSort(arr);

	cout << "Sorted character array is " << arr;
	return 0;
}