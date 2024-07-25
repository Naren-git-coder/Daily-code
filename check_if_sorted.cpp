#include<iostream>
using namespace std;

bool Csort(int n,int a[])
{
	for(int i = 1 ; i < n ; i++)
	{
		if(a[i] >= a[i-1] )
		{
			
		}
		else 
		{
		return false;
	}
	}
	return true;
}

int main()
{
	int n;
	cin>>n;
	
	int a[n];
	
	for(int i = 0 ; i< n ; i++)
	{
		cin>>a[i];
	}
	
	bool issorted = Csort(n,a);
	
	if(issorted)
	{
		cout<<"Sorted";
	}
	else
	cout<<"Not sorted";
}

