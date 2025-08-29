#include<iostream>
using namespace std;
void binarysearch(int a[],int n,int ele)
{
	int low,high,mid;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(ele==a[mid])
		{
			cout<<"\nelement found";
			return;
		}
		else if(ele<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	cout<<"\nelement not found";
}
int main()
{
	int size,element;
	cout<<"\nenter the size of arrray=";
	cin>>size;
	int b[size];
	
	cout<<"\n neter the ele of array=\n";
	for(int i=0;i<size;i++)
	{
		cin>>b[i];
	}
	cout<<"\n enter the element you want to search=";
	cin>>element;
	binarysearch(b,size,element);
	return 0;
}
