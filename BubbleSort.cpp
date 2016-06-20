#include <iostream>
using namespace std;
void bubbleSort(int *, int);// selects the max element in each pass and pushes it to the last available index in the array. The bigger numbers bubble up
int main()
{
	int i,j;
	int *a;
	cout<<"Enter the  number of elements to be sorted"<<endl;
	cin>>i;
	cout<<"Enter the elements to be sorted"<<endl;
	a=new int[i];
	for(j=0;j<i;j++)
	{
		cin>>a[j];
	}
	bubbleSort(a,i);
	delete[] a;
	return 0;
}
void bubbleSort(int *a, int len)
{
	int i,j,temp;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-i-1;j++) // len-1 since we have cannot test a[j+1] if we have condition j<len which would go out of bounds
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<len;i++)
	{
		cout<<a[i]<<endl;
	}
}
