#include<iostream>
using namespace std;
void bbsort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{

		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main()
{
	int n;
	cout<<"\n enter the length of the array=";
	cin>>n;
	int a[n];
	cout<<"\n enter the elements of array=\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

int k=1;
bbsort(a,n);
for(int i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			k++;
		}
		
	}

cout<<"\nthe no. of disticnt elements are="<<k;
return 0;
}
