#include <iostream>
using namespace std;
int missing_a(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] != i+1)
         {
            return i+1;
        }
    }
    return n;
}
int missing_b(int arr[], int n) 
{
     int low = 0, high = n-2; 
    while (low <= high)
     {
        int mid = (low + high) / 2;

        if (arr[mid] == mid + 1) 
        {
            
            low = mid + 1;
        } 
        else
         {
            
            high = mid - 1;
        }
    }
    return low + 1;
}


int main() 
{
    int n;
    cout<<"\nenter the size=";
    cin>>n;
    int arr[n];
    cout<<"\nenter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << "the missing number(a part using linear)" <<missing_a(arr, n) << endl;
    cout << "the missing number(b part using binary search): " <<missing_b(arr, n) << endl;
    return 0;
}
