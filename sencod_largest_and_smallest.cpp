#include<iostream>
using namespace std;

int secondlargest(int n , int a[] )
{
	int largest  = a[0];
	int slargest = INT_MIN;
	
	for(int i = 0 ; i < n ; i++)
	{
	     if(a[i] > largest)
		{
			slargest = largest;
			largest = a[i];
		}
		else if(a[i] < largest && a[i] > slargest)
		{
			slargest = a[i];
		}
	}
	return slargest;
}

int secondsmallest(int n , int a[] )
{
	int smallest  = a[0];
	int ssmallest = INT_MAX;
	
	for(int i = 0 ; i < n ; i++)
	{
	     if(a[i] < smallest)
		{
			ssmallest = smallest;
			smallest = a[i];
		}
		else if(a[i] !=  smallest && a[i] < ssmallest)
		{
			ssmallest = a[i];
		}
	}
	return ssmallest;
}

int main()
{
	int n ; 
	cout<<"Enter N = ";
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i ++)
	{
		cin>>a[i];
	}
	
	int slargest = secondlargest(n,a);
	int ssmallest = secondsmallest(n,a);
	
	cout<<"second largest no is "<<slargest<<endl;
	cout<<"second smallest no is "<<ssmallest;
}
