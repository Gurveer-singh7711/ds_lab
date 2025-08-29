#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter dimentions of square matrix";
    cin>>n;
    int size = (n*(n+1))/2;
    int d[size];
    cout<<"\nenter upper triangular elements\n";
    for(int i=0;i<size;i++)
        {
            cin>>d[i];
    
        }
    cout<<"your upper triangular matrix is\n";
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
            {    
            cout<<d[k]<<" ";
                k++;
            }
            else
            {
                cout<<"0 ";
        }
    }
        cout<<endl;
    }
    return 0;
}