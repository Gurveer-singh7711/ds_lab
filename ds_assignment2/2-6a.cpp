#include<iostream>
using namespace std;
int main()
{
    int r,c,size=0;
    cout<<"\n enter the dimensions of the matrix r x c\n";
    cin>>r>>c;
    int a[r][c];
    cout<<"\n enter ht elements of the matrix"<<endl;
    for(int i=0;i<r;i++)
    {
        cout<<"\n"<<i+1<<" row ele: \n";
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
            if(a[i][j]!=0)
            {
                size++;
            }
        }
    }
    int spr[size][3];
    int row=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
            spr[row][0]=i;
            spr[row][1]=j;
            spr[row][2]=a[i][j];
            row++;
        }
    }
}
cout<<"row  | column | element\n";
for(int i=0;i<size;i++)
{
    
cout<<" "<<spr[i][0] + 1<<"   |    "<<spr[i][1] + 1<<"   |   "<<spr[i][2]<<endl;

}
cout<<"\nog matrix\n";
for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
}

cout<<"\nTranspose in triplet form:\n";
cout<<"row  | column | element\n";
for(int i=0;i<size;i++)
{
    cout<<" "<<spr[i][1] + 1<<"   |    "<<spr[i][0] + 1<<"   |   "<<spr[i][2]<<endl;
}
return 0;
}