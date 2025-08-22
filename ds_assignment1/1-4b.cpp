#include<iostream>
using namespace std;
int main()
{
	int a[2][2]={{1,2},{3,4}},b[2][2]={{1,0},{0,1}},d[2][2]={0};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int same=0;same<2;same++)
			{
				d[i][j]=d[i][j]+(a[i][same]*b[same][j]);
			}
		}
	}
	for(int i=0; i<2; i++) {
    for(int j=0; j<2; j++) {
        cout << d[i][j] << " ";
    }
    cout << endl;
}

}
