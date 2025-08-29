#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter dimentions of matrix = ";
    cin>>n;
    int size = (n*(n+1))/2;
    int d[size];
    cout<<"\nenter elements of lower triangle :\n";
    for(int i=0;i<size;i++)
    {
        cin>>d[i];
    }
    cout<<"\nyour symmetric matrix is\n";
    int k=0,o;
    o=k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            if(i>=j)
            {
                k=o;
                cout<<d[k]<<" ";
                k++;
                o=k;
            }
            if(i<j)
            {
                cout<<d[i+j-k]<<" ";
                k++;
        }
    }
        cout<<endl;
    }
    return 0;
}
