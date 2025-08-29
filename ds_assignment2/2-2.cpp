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
	int b[7]={64,34,25,12,22,11,90};
	cout<<"\n your sorted array is\n";
	bbsort(b,7);
	for(int i=0;i<7;i++)
	{
		cout<<b[i]<<endl;
	}
	return 0;
}
