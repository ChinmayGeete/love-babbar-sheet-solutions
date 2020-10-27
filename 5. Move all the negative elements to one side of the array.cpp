// Move all the negative elements to one side of the array 
// using quick sort partition method

#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"enter the number of elements in array\n";
	int n;
	cin>>n;
	int a[n];
	cout<<"enter array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
		if(i!=j) swap(a[i],a[j]);
		j++;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
