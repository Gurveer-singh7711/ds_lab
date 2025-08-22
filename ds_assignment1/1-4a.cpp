#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\nenter no. of elemnets in array=";
	cin>>n;
	int a[n];
	cout<<"\nenter elements in your array=\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	cout<<"\nyour elements are=\n";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	for(int i=0;i<n/2;i++)
	{
		swap(a[i],a[n-i-1]);
	}
	cout<<"\nyour reversed elements are=\n";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	
}
