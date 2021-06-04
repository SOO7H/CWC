#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cout<<"Enter number of elements in array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++)
        v.push_back(make_pair(arr[i],i));
	sort(v.begin(),v.end());
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(v[i].second!=i)
		{
			swap(v[i].first,v[v[i].second].first);
			swap(v[i].second,v[v[i].second].second);
		}
        else continue;
		if(i!=v[i].second)
			--i;
		ans++;
	}
	cout<<"Minimum number of swaps required for sorting = "<<ans;
	return 0;
}