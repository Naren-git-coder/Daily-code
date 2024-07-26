#include<iostream>
using namespace std;

int linearsearch(int n , int a[] , int num)
{
    for(int i = 0 ; i< n ; i++)
    {
        if(a[i] == num)
        {
		
        return i;
    }
    }
    return -1;
}

int main()
{
    int n,num;
    cout<<"Enter n:";
    cin>>n;
    
    int a[n];
	
	for(int i = 0 ; i< n ; i++)
	{
		cin>>a[i];
	}
    cout<<"Enter the element to search: ";
    cin>>num;
	
    int result = linearsearch(n, a, num);
    
    // Print the result
    if (result != -1) {
        cout << "Number found at index: " << result << endl;
    } else {
        cout << "Number not found" << endl;
    }

    return 0;
}