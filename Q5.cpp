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
    int ans = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j])
            {
                v.push_back(make_pair(arr[i], arr[j]));
                ans++;
            }
	if(ans>0){
    cout<<"Number of inversions are: "<<ans<<"\n";
    cout<<"Pairs are: "<<"\n";
    for (int i = 0; i < n;i++)
        cout<<"("<<v[i].first<<","<<v[i].second<<") ";}
	else
		cout<<0;
	return 0;
}
