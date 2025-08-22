#include<iostream>
using namespace std;
void create(int a[],int n)
{
	cout<<"enter the elements of your aaray"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void display(int a[],int n)
{
	cout<<"\n your array is=";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
}
void insert(int a[],int &n,int ele,int pos)
{
	n++;
	for(int i=n-1;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=ele;
}
void delete_ele(int a[],int &n,int pos)
{
	for(int i=pos-1;i<n-1;i++)
	{
			a[i]=a[i+1];
	}
	n--;
}
void lin_search(int a[],int n,int ele)
{
	for(int i=0;i<n;i++)
	{
		if(ele==a[i])
		{
			cout<<"\n element found at "<<i+1;
		}
	}
}
int main()
{
	int k;
	int n;
			cout<<"\n enter the size of array=\n";
			cin>>n;
			int a[n];
	cout<<"select accordingly for a array";
	cout<<"\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT";
	again:
	cout<<"\nenter the opperation number=\n";
	cin>>k;
	
		switch(k)
		{
		case 1:
			create(a,n);
			goto again;
			break;
        case 2:
			display(a,n);
			goto again;
			break;
		case 3:
			{
			int ele,pos;
			cout<<"enter the element you want to store and at which positon\n";
			cin>>ele;
			cin>>pos;
			insert(a,n,ele,pos);
			cout<<"\nafter insertion";
			display(a,n);
			goto again;
			break;
		}
		case 4:
			{
			int ele,pos;
			cout<<"enter the positoin you want to delete=\n";
			cin>>pos;
			delete_ele(a,n,pos);
			cout<<"\nafter deletion";
			display(a,n);
			goto again;
			break;	
}
		case 5:
		{
				int ele;
			cout<<"\n enter the element you want to search=\n";
			cin>>ele;
			lin_search(a,n,ele);
			goto again;
			break;}
		default:
			cout<<"eop"<<endl;
}
	
	return 0;
		
}

