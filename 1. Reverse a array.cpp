// Reversing the array 
// 2 pointer solution

#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"enter the number of elements in array\n";
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int start=0;
	int end=n-1;
	while(start<=end)
	{
		swap(a[start],a[end]);
		start++;
		end--;
	}
	cout<<"Reversed array\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
