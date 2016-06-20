#include <iostream>
using namespace std;
void insertionSort(int *, int);// The element is inserted on the left side if its found to be lesser.Is better than bubble and selection sort since it has lesser number of comparisons.
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
	insertionSort(a,i);
	delete[] a;
	return 0;
}
void insertionSort(int *a, int len)
{
	int i,value,index;//7,2 //7,3,2
	for(i=1;i<len;i++)
	{
		value=a[i];//2 //3
		index=i;//1
		while(index!=0 && value < a[index-1])//true.. 2<7 //3<7
		{
			a[index]=a[index-1];//7 is at index 1
			index=index-1;//0
		}
		a[index]=value; //2 is at index 0
	}
	for(i=0;i<len;i++)
	{
		cout<<a[i];
	}
}
