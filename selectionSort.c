#include <iostream>
using namespace std;

void selectionSort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;				
			}
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
int main(){
	int a[10],i;
	int n=10;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"The soterd array is "<<endl;
	selectionSort(a,n)
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
