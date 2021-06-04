#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int d=log10(n)+1;
    int t=2;
    int nn=n+n*pow(10,d);
    int nnn=n+nn*pow(10,d);
    cout<<"The value of n + nn + nnn is: "<<n+nn+nnn;
    return 0;
}