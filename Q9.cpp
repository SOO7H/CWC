#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    //reverse(s.begin(),s.end());
    for(int i=0; i<s.length()/2; i++)
        swap(s[i],s[s.length()-i-1]);
    cout<<"String after reversing is: ";
    cout<<s;
    return 0;
}