#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n,s;
	cout<<"Enter the number to be checked: ";
    cin>>n;
	s=n*n;
	while (n) 
    {
		if (n%10!=s%10)
        {
			cout<<"false";
            return 0;
        }		
		n/=10;
		s/=10;
	}
	cout<<"true";
	return 0;
}
