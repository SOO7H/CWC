#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int r,c,o;
    cout<<"Enter number of rows and columns for array: ";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    cout<<"Enter 1 for ascending order or 2 for descending order: ";
    cin>>o;
    for(int k=0;k<r;k++)
    {
        int i,key,j;
        for (i=1;i<c;i++)
        {
            key=arr[k][i];
            j=i-1;
            switch(o) 
            {
		    case 1 :
            while (j>=0&&arr[k][j]>key)
            {
                arr[k][j+1]=arr[k][j];
                j=j-1;
            }
			   break;
		   case 2 :
            while (j >= 0 && arr[k][j] < key)
            {
                arr[k][j+1] = arr[k][j];
                j=j-1;
            }
			   break;
            }
            arr[k][j + 1] = key;
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<arr[i][j];
        cout<<"\n";}
	return 0;
}