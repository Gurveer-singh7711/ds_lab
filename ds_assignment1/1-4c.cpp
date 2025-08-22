#include<iostream>
using namespace std;
int main()
{
int r,c;
cout<<"enter the number of rows and column of your matrix"<<endl;
cin>>r>>c;
int a[r][c],b[c][r];
cout<<"\n enter the elements of your matrix\n";
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
		cin>>a[i][j];
	}
}
cout<<"\nyour matrix is\n";
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
}
for(int i=0;i<c;i++)
{
	for(int j=0;j<r;j++)
	{
		b[i][j]=a[j][i];
	}
}
cout<<endl;
for(int i=0;i<c;i++)
{
	for(int j=0;j<r;j++)
	{
		cout<<b[i][j]<<" ";
	}
	cout<<endl;
}
}
