// Find the "Kth" max and min element of an array 
// 1 method using sorting
#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"enter the number of elements in array\n";
	int n,k;
	cin>>n;
	int a[n];
	cout<<"enter array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter k\n";
	cin>>k;
	sort(a,a+n);
	cout<<"Kth largest is "<<a[n-k]<<endl;
	cout<<"kth smallest is "<<a[k-1]<<endl;
}
