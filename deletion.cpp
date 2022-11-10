#include<iostream>
using namespace std;
int main()
{
	int n,num,i,t;
	cout<<"no. of elements in arrray";
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	cout<<"enter number to be deleted"<<endl;
	cin>>num;
	for(i=0;i<n;++i)
	{
		if(a[i]==num)
		{
			t=i;
		}
	}
	for(i=t;i<n;++i)
	{
		a[i]=a[i+1];
	}
	n-=1;
	for(int i=0;i<n;++i)
	{
		cout<<a[i]<<" ";
	}
}
