#include <iostream>
using namespace std;
void mergeSort(int *, int);
void merge(int *,int*,int,int,int*, int);
int main()
{
	int i,j,k;
	int *a;
	cout<<"Enter the  number of elements to be sorted"<<endl;
	cin>>i;
	cout<<"Enter the elements to be sorted"<<endl;
	a=new int[i];
	for(j=0;j<i;j++)
	{
		cin>>a[j];
	}
	mergeSort(a,i);
	cout << "Out put is" << endl;
	for(k=0;k<i;k++)
	{
		cout<<a[k]<<endl;
	}
	delete[] a;
	return 0;
}
void mergeSort(int *a, int len)
{
	int *left,*right,mid,i;
	if(len < 2) return;
	mid=len/2;
	left=new int[mid];
	right=new int[len-mid];
	for(i=0;i<mid;i++)
	{
		left[i]=a[i];
	}
	for(i=mid;i<len;i++)
	{
		right[i-mid]=a[i];
	}
	mergeSort(left,mid);
	mergeSort(right,len-mid);
	merge(left,right,mid,len-mid,a,len);
	delete[] left;
	delete[] right;
}
void merge(int *left,int *right,int sizeLeft,int sizeRight, int *a, int len)
{
	int i=0,j=0,k=0;
	while(i<sizeLeft && j<sizeRight)
	{
		if(left[i]<right[j])
		{
			a[k]=left[i];
			i=i+1;
			k=k+1;
		}
		else
		{
			a[k]=right[j];
			j=j+1;
			k=k+1;
		}
	}
	while(i<sizeLeft)
	{
		a[k]=left[i];
		i=i+1;
		k=k+1;
	}
	while(j<sizeRight)
	{
		a[k]=right[j];
		j=j+1;
		k=k+1;
	}
	cout << endl;
	for(int m=0;m<len;m++)
	{
		cout<<a[m] << ' ';
	}
	cout << endl;
}