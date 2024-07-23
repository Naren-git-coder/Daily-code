#include<iostream>
using namespace std;

int num(int n)
{
	if(n>0)  
	{   
	num(n-1); 
	cout<<n<<endl;                 
    }
}

int main()
{
	int n;
	cout<<"N = ";
	cin>>n;
	num(n);
}
