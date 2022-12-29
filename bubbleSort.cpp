#include <iostream>
using namespace std;

void bubbleSort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int flag=0,temp;
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1])
		    {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
		
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
	bubbleSort(a,n);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
