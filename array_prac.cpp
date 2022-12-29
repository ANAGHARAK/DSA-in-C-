#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Helloo";
	cin>>n;
	
	int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	const int N=1e6+2;
	int idx[N];
	for(i=0;i<n;i++){
		idx[i]=-1;
	}
	int min_idx=1000001;
	
	for(i=0;i<n;i++)
	{
		if(idx[a[i]]!=-1){
			min_idx=min(min_idx,a[i]);
		}
		else
		{
			idx[a[i]]=i;
		}
	}
	if(min_idx==1000001)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<min_idx+1<<endl;
	}
	return 0;
	
	
}
