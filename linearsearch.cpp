#include<iostream>
using namespace std;
int main()
{
	int n,num,i,count;
	cout<<"no. of elements in arrray";
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	cout<<"enter number to be searched"<<endl;
	cin>>num;
	for(i=0;i<n;++i)
	{
		if(a[i]==num)
		{
			cout<<a[i]<<" is found at "<<i<<endl;
			count=1;
		}
	}
	if(count!=1)
	{
		cout<<"element not found";
	}
}
