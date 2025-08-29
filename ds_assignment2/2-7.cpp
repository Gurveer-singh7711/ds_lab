#include<iostream>
using namespace std;
int inversions(int arr[], int n)
 {
    int count = 0;
    cout << "inversion pairs are: ";
    for (int i = 0; i < n; i++)
     {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j])
             {
                cout<< arr[i] << "and" << arr[j] <<endl;
                count++;
            }
        }
    }
    return count;
}

int main() 
{
    int n;
    cout<<"\nenter the size of array=";
    cin>>n;
    int arr[n];
    cout<<"\nenter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\narray is=\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    
    int x = inversions(arr, n);
    cout << "number of inversions="<<x<<endl;

    return 0;
}
