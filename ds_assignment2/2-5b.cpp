#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of matrix = ";
    cin>>n;
    int size = 3*n - 2;
    int d[size];
    cout<<"\nenter tri-diagonal elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>d[i];
    }
    cout<<"\nmatrix is\n";
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-j==-1||i-j==0||i-j==1)
                cout<<d[k++]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}
