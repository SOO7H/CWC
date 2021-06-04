#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int f=0,s=1,t=1,n;
	cout<<"Enter the value of n: ";
    cin>>n;
	cout<<"Series: ";
	cout<<f<< " ";
	if(n>1)
		cout<<s<<" ";
	if(n>2)
		cout<<t<<" ";
	for(int i=3;i<n;i++)
	{
		int temp=f+s+t;
		f=s;
		s=t;
		t=temp;
		cout<<temp<<" ";
	}
	return 0;
}
