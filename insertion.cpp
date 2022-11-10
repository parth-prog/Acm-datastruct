#include<iostream>
using namespace std;
int main()
{
	int n,num,i;
	cout<<"no. of elements in arrray";
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	cout<<"enter index at which number should be inserted"<<endl;
	cin>>num;
	n+=1;
	for(i=n-2;i>=num;i--)
	{
		a[i+1]=a[i];
		
	}
	cout<<"enter number to be inserted"<<endl;
	cin>>a[num];
	for(i=0;i<n;++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
	
}
