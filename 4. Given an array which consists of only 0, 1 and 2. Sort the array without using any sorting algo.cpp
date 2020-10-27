// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"enter the number of elements in array\n";
	int n,k;
	int count0=0;
	int count1=0;
	int count2=0;
	cin>>n;
	int a[n];
	cout<<"enter array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0) count0++;
		else if(a[i]==1) count1++;
		else count2++;
	}
	int i=1;
	while(count0>0)
	{
		cout<<0<<" ";
		count0--;
	}
	while(count1>0)
	{
		cout<<1<<" ";
		count1--;
	}
	while(count2>0)
	{
		cout<<2<<" ";
		count2--;
	}
}
