#include<iostream>
using namespace std;
void del(int a[],int &n,int pos)
{
	for(int i=pos-1;i<n-1;i++)
	{
			a[i]=a[i+1];
	}
	n--;
}
int main()
{
	int n;
	cout<<"enter the no. of ele in the array=\n";
	cin>>n;
	int a[n];
	cout<<"\nenter the ele of array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]==a[j+1])
			{
				del(a,n,j+1);
				j--;
			}
			else
			{
				continue;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<endl<<a[i];
	}
	return 0;
}
