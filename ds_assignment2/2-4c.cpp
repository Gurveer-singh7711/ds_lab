#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"enter the string: ";
    getline(cin, s);

    int n = s.length();
    for(int i=0; i<n; i++)
    {
        char c = s[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            for(int j=i; j<n-1; j++)
            {
                s[j] = s[j+1];
            }
            n--;
            i--;      
        }
    }

    cout<<"string without vowels: ";
    for(int i=0; i<n; i++)
        {
            cout<<s[i];
        }
    cout<<endl;

    return 0;
}
