#include<iostream>
using namespace std;
int main()
{
	int r,c;
cout<<"enter the number of rows and column of your matrix"<<endl;
cin>>r>>c;
int a[r][c];
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
for(int i=0;i<r;i++)
{
	int s=0;
	for(int j=0;j<c;j++)
	{
		s=s+a[i][j];
	}
	cout<<"\n sum of elemets of "<<i+1<<"row="<<s<<endl;
}
for(int i=0;i<c;i++)
{
	int s=0;
	for(int j=0;j<r;j++)
	{
		s=s+a[j][i];
	}
	cout<<"\n sum of elemets of "<<i+1<<"column="<<s<<endl;
}
return 0;
}
