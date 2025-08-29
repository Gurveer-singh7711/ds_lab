#include <iostream>
using namespace std;
int main() {
    string s;
    cout << "enter string : ";
    cin >> s;
for(int i=0; i<s.length(); i++)
     {
        if(s[i] >= 'A' && s[i] <= 'Z')
         {
            s[i] = s[i] + 32;
        }
    }
cout<<"changing the uppercase to lowercase"<<endl;
    cout << "new string "<<s;
    return 0;
}
