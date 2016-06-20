#include <iostream>
using namespace std;
void Quicksort(int*,int,int);
int partition(int*,int,int);
void Swap(int*,int,int);
int main()
{
	int n;
	cin>>n;
	int*a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	Quicksort(a,0,n);
	for(int j=0;j<n;j++)
	{
		cout<<a[j];
	}
	return 0;
}
void Quicksort(int* a,int start,int end)
{
	int pivotIndex;
	if(start<end)
	{
		pivotIndex=partition(a,start,end);
		Quicksort(a,start,pivotIndex-1);
		Quicksort(a,pivotIndex+1,end);
	}	
}
int partition(int* a,int start,int end)
{
	int pivotElement;
	pivotElement=a[end];
	int i=start-1;
	for(int j=start;j<end-1;j++)
	{
		if(a[j]<=pivotElement)
		{
			i++;
			Swap(a,i,j);
		}
	}
	Swap(a,i+1,end);
	return (i+1);
}
void Swap ( int* a, int e1,int e2)
{
    int t = a[e1];
    a[e1] = a[e2];
    a[e2] = t;
}