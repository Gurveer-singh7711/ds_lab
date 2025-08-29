#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter a stirng: ";
    cin >> s;
    int n = s.length();
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
cout<<"string in alphabetical order: "<<s<<endl;
    return 0;
}
