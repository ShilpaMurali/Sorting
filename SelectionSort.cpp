#include <iostream>
using namespace std;
void selectionSort(int *, int);// The minimum element is selected and it is pushed to the least index on the left hand side of the array.
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
	selectionSort(a,i);
	delete[] a;
	return 0;
}
void selectionSort(int *a, int len)
{
	int i,j,min,temp;
	for(i=0;i<len-1;i++)
	{
		min=i;
		for(j=i+1;j<len;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];// sorting is done outside the for loop since you have to find the minimum element in the entire array and then swap.. for scenario like 2,1,0
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0;i<len;i++)
	{
		cout<<a[i];
	}
}
