#include <iostream>
using namespace std;

void merge(int a[],int l,int mid, int r)
{
	int i=l;
	int j=mid+1;
	int k=l;
	int b[100];
	while(i<=mid && j<=r)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=r)
		{
			b[k]=a[j];
			k++;
			j++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			k++;
			i++;
		}
	}
	for(k=l;k<=r;k++)
	{
		a[k]=b[k];
	}
}
void mergeSort(int a[],int l, int r)
{
	if(l<r){
		int mid=(l+r)/2;
		mergeSort(a,l,mid);
		mergeSort(a,mid+1,r);
		merge(a,l,mid,r);
	}
}
int main(){
	int a[10],i;
	int n=5;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The soterd array is "<<endl;
	
	mergeSort(a,0,4);
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

