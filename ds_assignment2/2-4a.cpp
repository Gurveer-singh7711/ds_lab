#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	cout<<"enter your first string\n";
	getline(cin,str1);
	cout<<"\nneter your second string\n";
	getline(cin,str2);
	cout<<str1;
	cout<<"\n both string concatinated\n"<<str1+str2;
	return 0;
}