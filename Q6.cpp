#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a,b,c;
    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;
    cout<<"Maximum is: ";
    cout<<(((a>b)?a:c)>c?((a>b)?a:c):c);
    return 0;
}