#include<iostream>
using namespace std;

int REV(int l, int r , int a[],int n )
{
	int temp = 0;
	if(l<r)
	{
	temp = a[l];
	a[l] = a[r];
	a[r] = temp;
}
	REV(l+1,r-1,a,n);
	for(int i = 0;i< n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
int main()
{
	int n,a[n],l,r;
	cout<<"Enter the number of elements: ";
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	REV(0,n-1,a,n);
	
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	  
}
