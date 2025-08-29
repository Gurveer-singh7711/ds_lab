#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the zise of the matrix=";
    cin>>n;
    int d[n];
    cout<<"\n enter diagonal elements=\n";
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
    }
    cout<<"\nyour matrix is\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
            cout<<d[i];
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;

}