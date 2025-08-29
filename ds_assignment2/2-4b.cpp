#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout <<"enter the string\n";
    getline(cin, str);

    int n = str.length();
    for(int i = 0; i < n/2; i++) {
        char t = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = t;
    }
 cout <<"reversed string"<<endl<<str;
 return 0;
}